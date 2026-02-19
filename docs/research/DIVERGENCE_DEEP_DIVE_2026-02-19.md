# CEASAR Divergence Deep Dive

Date: 2026-02-19

Scope:
- Compare `origin/hl2-2023` (JPlaney HL2 line) against `upstream/master` (Concord master).
- Explain functional subsystem differences, timeline behavior, and why branches diverged.

Method:
- Git history analysis in local repo (`/Users/admin/Documents/#CAESAR/CEASAR`).
- Branch-level commit graph and merge-base analysis.
- Tree-level file identity comparison by subsystem.
- Package and ProjectSettings diffs for platform stack confirmation.

## 1) Direct Answers to Your Questions

### Q1: Why is HL2/JPlaney ahead by one commit?
- `origin/hl2-2023` is **57 ahead / 138 behind** `upstream/master`.
- Your `TechnoHomesteader/main` is **58 ahead / 138 behind** because it adds one docs commit:
  - `777d5f7` `chore: add continuity docs and enforcement scaffolding`

### Q2: Were branches developed concurrently, or did one get abandoned and rebuilt?
- They were developed **concurrently for long periods** with cross-backport behavior.
- Shared active months (both sides had unique commits):
  - `2021-01`, `2021-02`, `2021-07`, `2021-08`, `2022-02`, `2022-12`, `2023-03`
- Evidence of cross-pollination:
  - HL2 side has at least **14 unique commits** explicitly saying variants of "merge from master".
  - Master side has commits referencing HL2 backpatching (e.g., PR #115).
- Conclusion: this was not a simple one-way fork abandonment; it was a dual-track line with selective syncs.

### Q3: Is `main` ahead in time, or is master mostly newer?
- Last commit timestamps:
  - HL2 unique line latest: **2025-03-23** (`0269942`)
  - Master unique line latest: **2023-03-08** (`6196a2d`)
- Bulk age profile:
  - HL2 unique commits: **57 total**, **50 in 2021**, median date `2021-08-07`
  - Master unique commits: **138 total**, **123 in 2021**, median date `2021-08-15`
- Interpretation:
  - HL2 line has a newer tail commit, but both branches’ divergence bulk is concentrated in 2021.
  - Master has more unique volume; HL2 has later endpoint.

## 2) Subsystem-by-Subsystem Functional Differences

## 2.1 XR/Input Subsystem

### Functional direction by branch
- `hl2-2023` direction:
  - Explicit MRTK + HoloLens interaction path retained/expanded.
  - Adds HoloLens-specific scripts:
    - `Assets/Scripts/Hololens/HLPointerInteraction.cs`
    - `Assets/Scripts/Hololens/HLTouchInteraction.cs`
  - Adds MRTK shader/profile artifacts under:
    - `Assets/MRTK/`
    - `Assets/MixedRealityToolkit.Generated/`
  - Adds hand-oriented UI prefabs (`HandInfoPanel`, `HandInteractionMenu`, `HandNetworkUsernameDisplay`).

- `upstream/master` direction:
  - No corresponding `Assets/Scripts/Hololens/*` files at tip.
  - No `Assets/MRTK/*` or `Assets/MixedRealityToolkit.Generated/*` trees at tip.

### Package-level stack difference (hard evidence)
From `Packages/manifest.json` diff (`upstream/master..origin/hl2-2023`):
- HL2 branch adds:
  - `com.microsoft.mixedreality.toolkit.extensions` `2.5.3`
  - `com.microsoft.mixedreality.toolkit.foundation` `2.5.3`
  - `com.microsoft.mixedreality.toolkit.tools` `2.5.3`
  - `com.unity.xr.arfoundation` `2.1.14`
  - `com.unity.xr.legacyinputhelpers` `2.1.7`
  - `com.unity.xr.openvr.standalone` `2.0.5`
  - `com.unity.xr.windowsmr.metro` `4.2.3`
- Master-only packages (absent in HL2 tip):
  - `com.unity.xr.management`
  - `com.unity.xr.oculus`
  - `com.unity.collab-proxy`

### Functional implication
- This is a real XR platform strategy divergence:
  - HL2 branch is MRTK/WindowsMR-centric with HL2-specific interaction scripts.
  - Master branch tracks a more XR-management/Oculus-oriented setup at package level.

## 2.2 UI/Menu/Info Panel Subsystem

### Tree-level state at branch tips
- Shared UI files: 64
- Identical among shared: 60
- Changed shared files: 4
  - `Assets/Scripts/UI/FloatingInfoPanel.cs`
    - `HandleClose()` changed from private to public in HL2 line.
  - `Assets/Scripts/UI/GroupUserButton.cs`
    - Adds `HL2Button` and defensive null checks for Image/Button toggling.
  - `Assets/Prefabs/UI/LoginScreenButton.prefab`
  - `Assets/Prefabs/UI/NetworkUsernameDisplayCanvas.prefab`
- HL2-only UI files: 26 (mostly hand/proddable/pressable menu assets).

### Functional implication
- UI logic is mostly aligned, but HL2 branch includes an additional hand-centric UI composition layer and prefabs that master does not keep at tip.

## 2.3 Networking/Sync Subsystem

### Tree-level state at branch tips
- Compared areas:
  - `Assets/Scripts/Network/*`
  - `Assets/Plugins/Colyseus/*`
  - `Assets/Plugins/WebSocket/*`
- Result:
  - Shared files: 92
  - Identical shared files: 92
  - Changed files: 0

### Network stack answer
- At current branch tips, both lines use the same core network stack composition:
  - Colyseus client code in `Assets/Scripts/Network/ColyseusClient.cs`
  - Colyseus plugin tree in `Assets/Plugins/Colyseus/`
  - WebSocket plugin tree in `Assets/Plugins/WebSocket/`
- So: **not a different network stack at tip**.
- The divergence in networking appears historical and mostly reconciled by current tip state.

## 2.4 Simulation/Content Subsystem

### Tree-level state at branch tips
- Shared files: 78
- Identical shared files: 77
- Changed shared files: 1 (`Assets/Scenes/DevScenes/NewUI.unity`)
- HL2-only files: 17 (mainly HoloLens scene variants and scene path placements).
- Master-only files: 6 (DevScenes placements for ARPlanets/Planets/SingleScene).

### Scene topology differences
- HL2 branch includes dedicated HoloLens scene folder:
  - `Assets/Scenes/Hololens/EarthInteraction.unity`
  - `Assets/Scenes/Hololens/Horizon.unity`
  - `Assets/Scenes/Hololens/LoadSim.unity`
  - `Assets/Scenes/Hololens/Stars.unity`
- Master keeps more of these in `Assets/Scenes/DevScenes/*` naming/location patterns.

### Functional implication
- Core celestial/network interaction scripts are largely aligned.
- Divergence is primarily scene/prefab organization and platform-specific scene composition.

## 2.5 Build/Toolchain Subsystem

### Structural difference magnitude
- `Build-AWS` files at tip:
  - HL2 branch: **2285** files
  - Master: **0** files
- MRTK-generated/tooling artifacts similarly retained in HL2 and absent in master.

### Project settings differences with runtime impact
From `ProjectSettings` diffs:
- HL2 branch enables UWP target pathing and Windows MR device config.
- `ProjectSettings/EditorBuildSettings.asset` enables HoloLens scene set and disables standard scene set for build.
- `ProjectSettings/ProjectSettings.asset` changes UWP capabilities:
  - `InternetClientServer: True` (HL2)
  - `PrivateNetworkClientServer: True` (HL2)

### Functional implication
- Toolchain divergence is substantial and includes generated build outputs + UWP-targeted settings in HL2 line.

## 3) Why This Divergence Looks Confusing

1. Newer commit date on HL2 side (`2025`) gives appearance of "more recent branch", but commit volume is still mostly 2021 on both sides.
2. Many critical code files are now identical at tips (especially networking and core simulation scripts), which can mask deep platform/config/prefab divergence.
3. Divergence is concentrated in platform layer and asset/build composition, not uniformly across all code modules.

## 4) Interpretation: What Actually Happened

Most likely sequence:
1. Branches split around common base (`5b1f4d3`) and both moved heavily in 2021.
2. Team backported selectively both directions (evidenced by "merge from master" and HL2 references in master PRs).
3. Over time, many runtime scripts converged, but platform/toolchain/scene/prefab layers remained branch-specific.
4. HL2 line received a later update in 2025 and then your docs commit in 2026 on `main`.

## 5) Decision-Relevant Takeaways

1. This is not solved by saying "just merge latest".
2. At tip, major unresolved divergence is mostly in:
   - XR package strategy
   - HoloLens interaction layer/prefabs
   - scene build topology
   - build artifacts/toolchain footprint
3. Networking stack is not the blocker at tip; it is already aligned.
4. If you stay HL2-first, backporting should target missing master value selectively, avoiding bulk conflict zones.

## 6) Suggested Next Diagnostic (Before Refactor Starts)

Create a 3-bucket reconciliation matrix:
1. **Keep HL2 implementation as canonical**
   - HoloLens scripts/prefabs and UWP build settings.
2. **Backport from master**
   - Missing UI/network/content commits that are not already reflected at tip behavior.
3. **Purge/normalize**
   - Build artifacts and generated outputs (`Build-AWS`, generated MRTK assets) that should not live as source-truth in mainline.

