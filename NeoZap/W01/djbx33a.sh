#!/bin/bash

djb2() {
    local hash=5381
    for ((i=0; i<${#1}; i++)); do
        char=${1:$i:1}
        hash=$((hash * 33 + $(printf "%d" "'$char")))
    done
    echo $((hash & 0x7FFFFFFF))
}

echo DJBX33A hash result: $(djb2 "The DJBX33A result with C and Bash should be the same")