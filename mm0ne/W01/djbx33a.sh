#!/bin/bash

hash=5381
input="The DJBX33A result with C and Bash should be the same"
for ((i=0; i<${#input}; i++)); do
    char=${input:$i:1}
    hash=$((hash * 33 + $(printf "%d" "'$char")))
done
echo DJBX33A hash result: $((hash & 0x7FFFFFFF))
