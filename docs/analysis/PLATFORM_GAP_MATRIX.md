# Platform Gap Matrix

## Candidate Targets
- HoloLens 2
- Quest 3
- Desktop (Windows/macOS)
- WebGL

## Matrix
| Capability / Constraint | Current State (`main`) | HoloLens 2 | Quest 3 | Desktop | WebGL | Notes |
|---|---|---|---|---|---|---|
| XR framework support | Legacy mix of MRTK 2.5.3, Oculus Integration, XR Management, Windows MR, and AR Foundation on Unity 2019.4 | Legacy fit, but tied to EOL platform assumptions | Partial fit through Oculus-specific path, not OpenXR-ready | Non-XR fallback exists | No active XR path | Current state is multi-stack rather than portable. |
| Input abstraction | Split between MRTK handlers, `OVRInput`, `OVRRaycaster`, and non-XR camera controls | Strongly coupled | Strongly coupled | Separate fallback path | Separate fallback path | Highest-value refactor is a unified interaction layer. |
| Scene/bootstrap selection | Enabled build scenes are the HoloLens set; Quest behavior relies on `XRDevice.model` heuristics | Works in current config | Needs cleanup and explicit target config | Works as fallback | Likely incomplete | Scene bootstrap should become platform-neutral. |
| Rendering and UI interaction | VR path converts UI canvases to world-space at runtime; HoloLens content embeds MRTK UI/prefabs | Mature legacy path | Usable prototype path | Stable enough for debugging | Present but secondary | UI interaction must move off MRTK and Oculus-specific raycasters. |
| Plugin compatibility | Windows MR, OpenVR, Oculus, and old AR Foundation packages coexist | High legacy compatibility | Medium, but based on stale stack | Medium | Low | Reducing plugin surface area is a prerequisite for resilience. |
| Networking portability | Colyseus networking and schemas are shared across runtime paths | Good | Good | Good | Probably good | Networking is not the main blocker. |
| Automated regression safety | Minimal play mode coverage; edit mode tests are placeholders | Low | Low | Low | Low | Porting risk is amplified by weak test coverage. |
| Build/deploy complexity | Repo includes committed UWP generated output under `Build-AWS/` and project settings remain HoloLens-biased | High | Medium-High | Medium | Medium | Generated artifacts should be treated as archival, not active source. |

## Working Assessment
- HoloLens 2 remains the most directly supported platform in the current repo configuration, but that path is strategically obsolete.
- Quest 3 is the best first revival target because the project already contains a VR interaction path, even though it is Oculus-specific and needs modernization.
- Desktop is valuable as a fallback and debugging environment during migration.
- WebGL should be treated as a later reassessment target, not a first-wave platform.
