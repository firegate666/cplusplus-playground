#!/usr/bin/env bash

FILENAME="$1"
INPUT="${FILENAME}.cpp"
OUTPUT="./out/${FILENAME}"

g++ "${INPUT}" -o "${OUTPUT}"

"${OUTPUT}"
