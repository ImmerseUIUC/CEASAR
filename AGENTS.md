# CEASAR Agent Operating Guide

## Purpose
This repository is being evaluated for platform porting and future mixed-reality development. Agent work should preserve continuity across sessions and produce auditable decisions.

## Current Focus
1. Analyze CEASAR codebase and runtime architecture.
2. Compare fork/branch variants (especially HoloLens 2 and MR branches).
3. Build a staged porting strategy for target platforms.

## Working Rules
1. Update `HANDOFF.md` at the end of each substantial work session.
2. Log all major technical decisions in `docs/decisions/DECISION_LOG.md`.
3. Store new findings in `docs/research/` and reference source branch/commit.
4. Keep roadmap and backlog synchronized in `docs/roadmap/`.
5. For any assumption that affects scope, record confidence and validation plan.

## Automated Enforcement
- CI enforcement is defined in `.github/workflows/docs-continuity.yml`.
- Local enforcement is available through `.githooks/pre-commit`.
- Install local hooks once per clone:
  - `bash scripts/install_git_hooks.sh`
- Policy and rule details live in `docs/CONTINUITY_ENFORCEMENT.md`.

## Session Checklist
1. Read `HANDOFF.md` first.
2. Review open items in `docs/roadmap/PORTING_BACKLOG.md`.
3. Check unresolved decisions in `docs/decisions/DECISION_LOG.md`.
4. Work on highest-priority blocked item.
5. Write handoff update before stopping.

## Canonical Docs Map
- Handoff state: `HANDOFF.md`
- Docs index: `docs/README.md`
- Fork inventory: `docs/research/FORK_INVENTORY.md`
- Research notes: `docs/research/`
- Roadmap and backlog: `docs/roadmap/`
- Decision records and decision tree: `docs/decisions/`
- Porting analysis artifacts: `docs/analysis/`

## Definition of Done (Per Task)
1. Findings recorded in the correct docs location.
2. Impact on roadmap/backlog reflected.
3. Decision logged (or explicitly marked as pending).
4. `HANDOFF.md` updated with next actions.
