# CEASAR Codebase Audit

## Scope
- Branch: `main`
- Commit: `777d5f7e`
- Auditor: Codex
- Date: 2026-03-11
- Audit goal: assess how much of CEASAR can be preserved while shifting from a HoloLens-centered stack to a Quest 3 first, OpenXR-aligned architecture.

## Executive Summary
CEASAR's core educational runtime is still in good shape conceptually. The simulation, scene content, celestial data pipeline, UI state, annotation flow, and multiplayer logic are mostly shared application code rather than deeply platform-specific code. That is the main positive signal for a revival effort.

The current XR layer is not resilient. The project combines a legacy HoloLens/MRTK path, an Oculus-specific Quest path, Unity 2019-era XR settings, and runtime heuristics based on device names. This means the app is portable in intent but not yet in implementation. A Quest 3 first migration is feasible, but it should be treated as an XR stack modernization project rather than a simple build retarget.

## Architecture Snapshot

### Runtime composition
- `SimulationManager` is the long-lived application state singleton. It stores the local player, current pin/time/location, remote player state, selected celestial objects, and references to the active runtime controllers.
- `SimulationManagerComponent` is the bootstrapping MonoBehaviour. It creates or reuses persistent instances of the network controller, interaction controller, celestial sphere, main menu, info panel, and scene loader.
- `DataController` and `DataManager` own the celestial simulation content. They import star, city, and constellation data, instantiate the star sphere once, and update orientation/time-dependent state on scene changes.
- `InteractionController` handles world interactions that must be synchronized or converted into domain actions: earth pins, celestial selections, annotations, and remote player updates.
- `NetworkController` and `ColyseusClient` provide multiplayer presence and shared interactions through a Colyseus room.
- `MenuController`, `InfoPanelController`, and related UI scripts drive scene navigation, simulation time, snapshots, annotation mode, and location changes.

### Scene organization
- The project contains shared scenes under `Assets/Scenes/` and HoloLens-specific variants under `Assets/Scenes/Hololens/`.
- The current enabled build scenes are the HoloLens scene set, not the shared desktop/VR set.
- Scene selection is partially platform-driven. `SimulationManager.Scenes` returns scene lists through compile-time platform symbols, while `SceneController` and `SceneLoader` also branch at runtime based on XR device detection.

### Data and service boundaries
- The celestial simulation and domain model are relatively self-contained and should be portable with limited platform work.
- Multiplayer is also mostly portable because it is message- and event-driven, with platform-specific behavior living primarily in avatar/input/camera code rather than in the networking layer itself.
- The main portability boundary is the XR interaction stack: camera rig setup, pointer/raycast input, UI raycasters, controller buttons, and MRTK/Oculus service dependencies.

## Dependencies

### Unity and packages
- Unity version is locked to `2019.4.18f1`.
- Package Manager dependencies include:
  - `com.microsoft.mixedreality.toolkit.*` `2.5.3`
  - `com.unity.xr.arfoundation` `2.1.14`
  - `com.unity.xr.legacyinputhelpers` `2.1.7`
  - `com.unity.xr.openvr.standalone` `2.0.5`
  - `com.unity.xr.windowsmr.metro` `4.2.3`
- There is no OpenXR package in `Packages/manifest.json`.

### Asset-based SDKs and plugins
- The repo includes a committed `Assets/Oculus/` tree, including Oculus runtime assets and samples.
- MRTK-generated profiles and assets are committed under `Assets/MixedRealityToolkit.Generated/`.
- The project also includes custom utility/data libraries such as `SunCalcNet`, JSON assets, and Colyseus-related networking code.

### XR loader configuration
- `Assets/XR/XRGeneralSettings.asset` shows Oculus configured as the active loader for both Standalone and Android.
- Metro, iPhone, and WebGL provider groups exist in XR Management assets, but Metro and WebGL currently have no active loaders configured there.
- XR Management automatic loading/running is disabled in the Standalone and Android provider assets, so current runtime behavior still depends heavily on manual/device-specific bootstrap logic.

## Platform Coupling

### HoloLens-specific coupling
- HoloLens scenes are currently the enabled build scenes in `ProjectSettings/EditorBuildSettings.asset`.
- Custom MRTK-based input scripts live in `Assets/Scripts/Hololens/`.
- `SimulationManagerComponent` imports MRTK input types directly.
- HoloLens scenes and prefabs reference `MixedRealityToolkit`, `MixedRealityPlayspace`, and many MRTK UI components.
- `Assets/MixedRealityToolkit.Generated/CustomProfiles/CEASAR_MRTK_HL2_*` profiles are tied to Windows Mixed Reality device managers, eye gaze, speech input, and Windows camera settings.
- `ProjectSettings/ProjectSettings.asset` is configured for Holographic UWP targets and enables capabilities such as `GazeInput` and `SpatialPerception`.

Implication:
The HoloLens path is much deeper than the two custom HoloLens scripts alone. Even if the shared simulation layer survives intact, a large portion of the HoloLens UX stack is serialized into scenes, prefabs, and MRTK profiles.

### Oculus / Quest-specific coupling
- `Assets/Scripts/VR/VRInteraction.cs` uses `OVRInput` directly for controller buttons, thumbsticks, grab state, and haptics.
- `Assets/Scripts/SceneLoader.cs` converts canvases to world-space VR UI and attaches `OVRRaycaster`.
- Runtime device detection checks `UnityEngine.XR.XRDevice.model` strings for `oculus` or `quest` to decide whether to create the VR rig.
- `SceneController` and related scripts use similar heuristics to choose VR-specific playable scenes.

Implication:
CEASAR already has a Quest-oriented path, but it is Oculus Integration specific rather than OpenXR-oriented. That path is a useful prototype for interaction design, not a future-proof foundation.

### Desktop and WebGL coupling
- A non-XR fallback path exists through standard cameras and UI camera controls.
- WebGL templates and settings exist, but WebGL has no active XR loader configuration and several scripts branch around non-WebGL behavior rather than offering a first-class web interaction model.
- Desktop and WebGL are better thought of as fallback render targets than as equally mature platforms.

Implication:
Desktop is useful as a debugging and validation target. WebGL remains plausible for non-immersive experiences, but it does not currently look like a near-term primary target for the revival effort.

## Current Build and Runtime State
- `origin/main` is now the practical baseline branch. It contains the previous `origin/hl2-2023` work and is ahead by two commits.
- The repo includes a committed generated UWP build tree under `Build-AWS/` with about 2,285 tracked files.
- The most recent major platform-oriented commit (`0269942e`) primarily added generated UWP/IL2CPP build artifacts and updated project settings rather than modernizing the XR stack.
- Android is enabled as an XR target, but the current project settings still reflect an older mobile/XR setup and should not be treated as a ready-made Quest 3 configuration.

## Test and Validation State
- There is limited automated coverage.
- Play mode tests include a small `TestMenuFunctions.cs` suite for basic menu/date behavior.
- Edit mode tests are currently placeholder-level and do not validate core portability risks.

Implication:
The project has very little automated protection for refactoring the XR layer. Shared simulation and networking code should gain targeted tests before major migration work begins.

## Key Findings

### 1. The simulation and collaboration core are portable enough to preserve
The heaviest logic around celestial data, scene state, pins, annotations, and multiplayer synchronization lives in shared code. That is the strongest reason to revive CEASAR instead of rebuilding it from scratch.

### 2. The XR layer is fragmented across vendor-specific stacks
HoloLens depends on MRTK and Windows-specific providers. Quest depends on Oculus Integration and `OVRInput`. Desktop uses a separate camera/input path. There is no single abstraction layer for pointing, selecting, locomotion, haptics, or UI interaction.

### 3. Current Quest support is a useful starting point, not the destination architecture
The project already knows how to present itself in VR and has Quest-oriented interaction behavior. That reduces product risk. However, the implementation is tied to old Oculus APIs and runtime heuristics instead of a resilient OpenXR path.

### 4. Serialized content likely hides more HoloLens coupling than the script count suggests
Only a few custom scripts sit in `Assets/Scripts/Hololens/`, but many scenes, prefabs, and generated MRTK profiles are HoloLens-specific. Migrating the XR stack will require scene/prefab audit work, not only C# changes.

### 5. Build artifacts are mixed with source in a way that increases maintenance noise
The committed `Build-AWS/` directory is valuable as an archival artifact of a known UWP build, but it is not source. Keeping it in the main development path makes diffs, repo size, and platform analysis noisier.

### 6. Automated safety nets are too thin for an engine/XR migration
A Quest-first OpenXR migration will touch cameras, input, UI interaction, scene bootstrap, and prefabs. The current tests are not enough to protect against regressions in core simulation behavior while that work happens.

## Migration Implications

### What can likely stay
- Celestial data import and star/constellation generation
- Simulation state and pin/location/time logic
- Multiplayer message schema and Colyseus integration pattern
- Much of the scene-specific domain content and educational flow

### What likely needs replacement or heavy refactoring
- MRTK-specific scene/prefab wiring
- `OVRInput`, `OVRRaycaster`, and Oculus-specific UI interaction
- Device-name-based XR detection and scene routing
- Legacy Unity 2019 XR stack assumptions

### Highest-leverage technical direction
1. Establish a Quest 3 first target as the modernization anchor.
2. Upgrade toward a Unity/XR stack that can support OpenXR cleanly.
3. Introduce a platform-neutral XR interaction layer for:
   - pointer/raycast selection
   - grab/select actions
   - menu invocation
   - haptics
   - camera rig bootstrap
4. Migrate shared UI and scene content onto that abstraction one slice at a time.

## Recommended Next Steps

### Immediate
- Inventory serialized MRTK dependencies across scenes and prefabs.
- Define the minimum Quest 3 first playable scope.
- Choose the modernization baseline: target Unity LTS, XR plugin strategy, and interaction toolkit direction.

### Short-term
- Build an XR interaction seam that can replace both MRTK pointer handlers and `OVRInput` button polling.
- Separate archival/generated UWP build outputs from active source analysis.
- Add focused tests for simulation state, pin updates, and network message handling.

### Strategic
- Treat OpenXR portability as an architectural requirement, not just a packaging goal.
- Preserve desktop fallback as a debugging mode.
- Defer WebGL and future-platform ambitions until the Quest-first XR baseline is stable.

## Bottom Line
CEASAR is worth porting. The codebase already contains a portable educational core and a partially working VR branch of behavior. The main challenge is not rebuilding the app logic; it is replacing a brittle, mixed-generation XR stack with a cleaner Quest-first foundation that can later support additional OpenXR-compatible devices.
