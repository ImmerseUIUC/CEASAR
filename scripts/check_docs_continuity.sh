#!/usr/bin/env bash
set -euo pipefail

usage() {
  cat <<'USAGE'
Usage:
  scripts/check_docs_continuity.sh --staged
  scripts/check_docs_continuity.sh --against <git-ref>
USAGE
}

mode="staged"
against_ref=""

while (($# > 0)); do
  case "$1" in
    --staged) mode="staged"; shift ;;
    --against) mode="against"; shift; against_ref="$1"; shift ;;
    --help|-h) usage; exit 0 ;;
    *) echo "error: unknown argument: $1" >&2; usage; exit 2 ;;
  esac
done

collect_changed_files() {
  if [[ "$mode" == "staged" ]]; then
    git diff --cached --name-only --diff-filter=ACMR
  else
    git diff --name-only --diff-filter=ACMR "$against_ref...HEAD"
  fi
}

is_documentation_file() {
  case "$1" in
    AGENTS.md|HANDOFF.md|README.md|docs/*) return 0 ;;
    *) return 1 ;;
  esac
}

changed_files_raw="$(collect_changed_files | sed '/^$/d')"
[[ -z "$changed_files_raw" ]] && { echo "Docs continuity check: no changed files."; exit 0; }

non_doc=0
handoff=0
knowledge=0

while IFS= read -r file; do
  [[ -z "$file" ]] && continue
  is_documentation_file "$file" || non_doc=1
  [[ "$file" == "HANDOFF.md" ]] && handoff=1
  case "$file" in
    docs/research/*|docs/analysis/*|docs/roadmap/*|docs/decisions/*) knowledge=1 ;;
  esac
done <<< "$changed_files_raw"

if (( non_doc == 0 )); then
  echo "Docs continuity check: only documentation files changed."
  exit 0
fi

if (( handoff == 0 || knowledge == 0 )); then
  echo "Docs continuity check failed." >&2
  (( handoff == 0 )) && echo "- Update HANDOFF.md" >&2
  (( knowledge == 0 )) && echo "- Update at least one docs/research|analysis|roadmap|decisions file" >&2
  exit 1
fi

echo "Docs continuity check passed."
