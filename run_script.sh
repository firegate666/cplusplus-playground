#!/usr/bin/env bash

FILENAME="$1"
INPUT="${FILENAME}.cpp"
OUTPUT="./out/${FILENAME}"

echo "Clean up $OUTPUT"
rm -f "$OUTPUT"

echo "Compile $INPUT"
g++ "${INPUT}" -o "${OUTPUT}"

"${OUTPUT}"
