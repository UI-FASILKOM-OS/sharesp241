#!/bin/bash

djb() {
    local str=$1
    local hash=5381

    for ((i = 0; i < ${#str}; i++)); do
        local char=${1:i:1}
        hash=$(( (hash << 5) + hash + $(printf "%d" "'$char") ))
    done

    echo $((hash & 0x7FFFFFFF))
}

input="The DJBX33A result with C and Bash should be the same"
res=$(djb "$input")

echo "$res"
