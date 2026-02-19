#!/usr/bin/env bash
set -euo pipefail
repo_root="$(git rev-parse --show-toplevel 2>/dev/null || pwd)"
git -C "$repo_root" config core.hooksPath .githooks || true
chmod +x "$repo_root/.githooks/pre-commit" "$repo_root/scripts/check_docs_continuity.sh" || true
echo "Local docs continuity hook installed (if this is a git clone)."
