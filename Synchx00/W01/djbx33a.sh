#!/bin/bash

djbX33A_hash() {
    local str="$1"
    local hash=5381

    for ((i = 0; i < ${#str}; i++)); do
        hash=$(( (hash << 5) + hash + ${str:i:1} )) # hash * 33 + c
    done

    echo "$hash"
}

input="The DJBX33A result with C and Bash should be the same"
hash=$(djbX33A_hash "$input")
echo "Hash value (Bash): $hash"
