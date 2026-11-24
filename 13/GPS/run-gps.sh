#!/usr/bin/env bash
set -euo pipefail

cd -- "$(dirname -- "${BASH_SOURCE[0]}")"
port="${1:-8000}"
bind_address="${2:-127.0.0.1}"

printf 'Compiling geo2json.c on %s...\n' "$(uname -s)"
(
    build_dir="$(mktemp -d)"
    trap 'rm -f -- "$build_dir/geo2json"; rmdir -- "$build_dir"' EXIT

    gcc -std=c11 -Wall -Wextra geo2json.c -o "$build_dir/geo2json"
    "$build_dir/geo2json"
)

printf 'Local map: http://127.0.0.1:%s/index.html\n' "$port"
printf 'Press Ctrl+C to stop the server.\n'
exec python3 -m http.server "$port" --bind "$bind_address"
