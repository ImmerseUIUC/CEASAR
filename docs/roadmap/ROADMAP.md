# Porting Roadmap

## Guiding Direction
- Target Quest 3 as the first practical revival platform.
- Make OpenXR portability a design goal so future Apple Vision Pro and Android XR exploration is cheaper.
- Preserve desktop as a debugging and fallback environment during migration.

## Phase 0 - Baseline Capture
- Inventory Unity version, packages, plugins, build targets.
- Establish architectural map (scene structure, subsystems, data flow).
- Produce branch delta summary and confirm the active working baseline.

## Phase 1 - Portability Assessment
- Fill platform gap matrix for candidate targets.
- Identify platform-coupled code and asset blockers.
- Define minimal viable Quest 3 scope and acceptance criteria.

## Phase 2 - Migration Plan
- Sequence Unity/XR dependency upgrades and refactors.
- De-risk XR/input/rendering abstractions.
- Define test and validation strategy per target platform.

## Phase 3 - Execution and Stabilization
- Implement staged Quest-first port.
- Run performance and UX parity checks.
- Prepare release packaging/deployment runbooks.
