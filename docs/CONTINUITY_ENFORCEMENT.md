# Continuity Enforcement Policy

## Goal
Prevent code changes from landing without continuity documentation updates.

## Enforced Rule
If a commit/PR includes any non-documentation file changes, then both of the following are required:
1. `HANDOFF.md` must be updated.
2. At least one knowledge document must be updated under:
   - `docs/research/`
   - `docs/analysis/`
   - `docs/roadmap/`
   - `docs/decisions/`

Documentation-only changes are allowed without additional requirements.

## What Counts As Documentation
- `AGENTS.md`
- `HANDOFF.md`
- `README.md`
- Anything under `docs/`

## Enforcement Points
1. Local pre-commit hook:
   - Hook file: `.githooks/pre-commit`
   - Install command: `bash scripts/install_git_hooks.sh`
2. CI pull request gate:
   - Workflow: `.github/workflows/docs-continuity.yml`
   - Script: `scripts/check_docs_continuity.sh --against origin/<base-branch>`

## Manual Run
- Staged changes:
  - `scripts/check_docs_continuity.sh --staged`
- Against another ref:
  - `scripts/check_docs_continuity.sh --against origin/master`
