# Decision Log

## Status Codes
- Proposed
- Accepted
- Rejected
- Superseded

## Decision Table
| ID | Date | Topic | Status | Decision | Rationale | Owner | Follow-up |
|---|---|---|---|---|---|---|---|
| D-001 | 2026-02-18 | Baseline branch | Accepted | Use `jplaney/CEASAR:hl2-2023` as primary analysis baseline | Most recent HL2-related active line discovered so far | Team | Revisit if newer fork activity appears |
| D-002 | 2026-02-18 | Documentation continuity enforcement | Accepted | Enforce docs updates via local pre-commit hook and PR CI gate using `scripts/check_docs_continuity.sh` | Reduces context loss and guarantees handoff + knowledge artifacts are updated with code changes | Team | Re-tune rule strictness after first 2 weeks of usage |
| D-003 | 2026-03-11 | Active working baseline | Accepted | Use `origin/main` as the current working baseline for analysis and planning | In the current repo, `origin/main` fully contains `origin/hl2-2023` and adds newer continuity/dev commits | Team | Re-check if a newer platform branch appears |
| D-004 | 2026-03-11 | Revival target strategy | Accepted | Prioritize Quest 3 as the first revival target and keep the migration OpenXR-aligned for future platform flexibility | HoloLens is EOL, Quest is the clearest near-term execution target, and OpenXR-aligned design reduces future rework | Team | Reassess engine and XR stack choice during migration planning |
