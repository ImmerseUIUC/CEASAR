# CEASAR Divergence Report

Generated: 2026-02-19T03:54:40.361224Z

## 1) Branch Relationship (Authoritative Compare)
- Compare base: `concord-consortium/master`
- Head: `TechnoHomesteader/main`
- Status: **diverged**
- `main` is **58 ahead** and **138 behind** `master`.
- Shared merge-base lineage is old (`5b1f4d3`), so both branches evolved independently.
- The extra `+1` commit is your documentation commit: `777d5f7`.

## 2) Timeline Summary
- Missing-on-main side (138 commits from master): 2021-01-28 to 2023-03-08
- Ahead-on-main side (58 commits): 2021-01-26 to 2026-02-19
- Ahead excluding docs commit (`777d5f7`): **57 commits**, 2021-01-26 to 2025-03-24

## 3) Commit Composition by Functional Category
### 3.1 Missing on main (138 commits from master)
- Merge/Meta: 45
- Other: 35
- Content/Simulation: 22
- UI/UX: 19
- Networking/Sync: 10
- XR-HL2/MRTK: 3
- XR-VR/Quest: 2
- Build/Toolchain: 2

### 3.2 Ahead on main (58 commits not in master)
- Other: 16
- XR-HL2/MRTK: 11
- Merge/Meta: 9
- UI/UX: 8
- Networking/Sync: 7
- Content/Simulation: 5
- Build/Toolchain: 2

## 4) File-Level Hotspots (GitHub compare file list capped at 300)
Note: GitHub compare API truncates file list to 300 entries. Counts below are from those listed files after excluding `Assets/Samples/*` noise.

### 4.1 Missing-on-main side hotspot modules
- Assets/Scripts: 67
- Assets/Textures: 67
- Assets/Prefabs: 25
- Assets/Scenes: 20
- Assets/MRTK: 19
- Assets/Data: 4
- Assets/SunCalcNet: 4
- Assets/MixedRealityToolkit.Generated: 3
- Assets/Resources: 3
- Assets/HTML: 2
- Assets/Materials: 2
- Assets/Plugins: 2

### 4.2 Ahead-on-main side hotspot modules
- Assets/Textures: 71
- Assets/Scripts: 52
- Assets/Prefabs: 42
- Assets/MixedRealityToolkit.Generated: 12
- Assets/Scenes: 12
- Assets/Materials: 5
- Assets/Data: 4
- Assets/SunCalcNet: 4
- Assets/HTML: 2
- Assets/Plugins: 2
- Assets/Resources: 2
- Assets/Shaders: 2

### 4.3 Overlap hotspots (conflict risk)
- Overlapping changed files (meaningful set): **128**
- Assets/Scripts: 44
- Assets/Textures: 42
- Assets/Prefabs: 13
- Assets/Scenes: 9
- Assets/Data: 4
- Assets/SunCalcNet: 4
- Assets/HTML: 2
- Assets/Materials: 2
- Assets/Plugins: 2
- Assets/Resources: 2
- Assets/HTML.meta: 1
- Assets/MixedRealityToolkit.Generated: 1

## 5) Subsystem-Level Summary
### XR/Input subsystem
- Main-ahead side contains concentrated HL2/MRTK interaction work (hands, pointers, proddable UI, boundary/spatial awareness toggles).
- Master-missing side contains fewer explicit HL2 commits but many merges and broad project changes that still touch XR-adjacent prefabs/scripts.

### UI/Menu/Info Panel subsystem
- Heavy churn on both sides.
- High overlap under `Assets/Prefabs/UI/*` and `Assets/Scripts/*`.
- This is a primary conflict zone if bulk merging.

### Networking/Sync subsystem
- Missing side includes network/date-time and layout updates.
- Ahead side also includes sync and group/menu behavior updates.
- Reconciliation likely needs behavior-level testing, not just compile-level merging.

### Simulation/content subsystem
- Missing side has many constellation/scene/content changes.
- Ahead side includes earth/star interaction fixes and selective content changes.
- Content parity decisions should be explicit (do not assume latest-by-date equals desired-by-product).

### Build/toolchain subsystem
- Not dominant by commit count in message-level classification, but still includes Unity/build/readme/cert-related commits.
- Build artifacts and generated assets are present in repository history and should be treated carefully during cleanup.

## 6) Representative Commit Samples
### Missing-on-main samples
- `40ef176` Remove the MRTK from this clean branch, break the info panel out of the main UI into its own prefab ready for VR port
- `3381dd3` Merge pull request #113 from concord-consortium/downgrade-unity2019
- `2b85de5` Add new constellation lines
- `d4bc99e` Update prefabs
- `44dc7bf` Merge pull request #114 from concord-consortium/UpdatedConstellationLines
- `9253992` Updated scripts from Hololens 2 work
- `162b11f` Fix some issues with annotations, networking updates to date/time, VR fixes
- `3df16ed` Add the Undo button to the Interaction Menu prefab
- `59b3b1c` Controller diagram
- `3e12d30` Keyboard and mouse illustration
- `edbc62e` Merge pull request #116 from concord-consortium/tutorial-images
- `841f7f9` Tidy up UI and fixes from HL2 branch for VR mode

### Ahead-on-main samples
- `5be5cad` Remove all the XR plugin management pieces and go back to legacy XR to get HL2 working
- `757dda4` Fixes and adjustments to menu / info panel from main
- `6c7ac21` Disable boundary system and spatial awareness for this simulation
- `49a70db` Update prefabs for Hololens to use proddable menu, split the Selection Panel and link to the new menu
- `460e5d5` Make the info panel into a hand-controlled prefab that moves with the left hand
- `4ef6273` Left and right hand control fixed for menu and info panel
- `dbf7d81` Fixes for duplicated menus when switching scenes
- `f7d5e04` Adjust interaction with Earth model when Earth is not at the origin (0,0,0)
- `dbcce49` Fixed Earth Touch interaction
- `37621bc` Fix star pointer interaction in Horizon
- `bd19682` Prune the MRTK examples from the repository
- `3289ce9` Disable diagnostics, fix NaN from invalid pointer data when selecting a point on Earth, adjust pin sizes, remove debug panel from info panel

## 7) Risk Interpretation
- This is not “one branch forgot to pull”; it is a sustained **dual-track development history**.
- Bulk merge has high conflict risk in `Assets/Scripts`, `Assets/Prefabs`, `Assets/Scenes`, and UI/network modules.
- Selective backport/cherry-pick with subsystem testing is lower risk than immediate full merge.

## 8) Practical Implications for Your Baseline Decision
If you stay HL2-first baseline:
- Keep `main` as baseline.
- Build a backport candidate list from missing 138 focused on networking/UI bugfixes with clear test cases.

If you want broader parity:
- Build an `upstream-sync` integration branch first.
- Resolve/validate by subsystem, then selectively merge into `main`.

---

## Artifacts Used
- `/tmp/ceasar_missing_138.tsv`
- `/tmp/ceasar_ahead_58.tsv`
- `/tmp/ceasar_missing_138_categorized.tsv`
- `/tmp/ceasar_ahead_58_categorized.tsv`
- `/tmp/ceasar_compare_main_to_master.json`
- `/tmp/ceasar_compare_master_to_main.json`
