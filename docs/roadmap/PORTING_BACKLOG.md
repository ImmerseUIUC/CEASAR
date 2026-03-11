# Porting Backlog

## Priority Legend
- P0: Blocks foundational planning
- P1: High-value analysis tasks
- P2: Nice-to-have

## Items
- [x] P0: Build dependency inventory from `Packages/manifest.json` and locked versions.
- [x] P0: Document platform-specific code paths (HoloLens/Oculus/desktop/web).
- [x] P0: Create platform gap matrix with current-state assessment.
- [ ] P0: Choose the modernization baseline for a Quest 3 first, OpenXR-aligned port.
- [ ] P0: Define a platform-neutral XR interaction layer to replace direct MRTK and `OVRInput` coupling.
- [ ] P0: Inventory serialized MRTK dependencies across scenes and prefabs.
- [ ] P1: Identify build pipeline constraints and required toolchains for Quest-first development.
- [ ] P1: Validate Android/XR loader settings and current project settings against the target Quest workflow.
- [ ] P1: Decide how to treat committed generated artifacts under `Build-AWS/` during active development.
- [ ] P1: Expand automated coverage around shared simulation, pin, and network behavior before major XR refactors.
- [ ] P1: Define the acceptance checklist for the first Quest 3 playable milestone.
- [ ] P2: Reassess WebGL and desktop product scope after the Quest-first XR baseline is stable.
