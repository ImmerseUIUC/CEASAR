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
