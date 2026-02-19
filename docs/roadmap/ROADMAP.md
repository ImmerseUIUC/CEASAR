# Porting Roadmap

## Phase 0 - Baseline Capture
- Inventory Unity version, packages, plugins, build targets.
- Establish architectural map (scene structure, subsystems, data flow).
- Produce branch delta summary (`hl2-2023` vs `master` and older HL2 branches).

## Phase 1 - Portability Assessment
- Fill platform gap matrix for candidate targets.
- Identify platform-coupled code and asset blockers.
- Define minimal viable port scope and acceptance criteria.

## Phase 2 - Migration Plan
- Sequence dependency upgrades and refactors.
- De-risk XR/input/rendering abstractions.
- Define test and validation strategy per target platform.

## Phase 3 - Execution and Stabilization
- Implement staged port.
- Run performance and UX parity checks.
- Prepare release packaging/deployment runbooks.
