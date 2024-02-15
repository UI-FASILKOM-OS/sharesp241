#!/bin/bash

djb_hash() {
    local data="$1"
    local hash_value=5381 

    for ((i = 0; i < ${#data}; i++)); do
        hash_value=$(( (hash_value << 5) + hash_value + $(printf "%d" "'${data:$i:1}") ))
    done

    echo $((hash_value & 0x7FFFFFFF))
}

input="The DJBX33A result with C and Bash should be the same"
hash_result=$(djb_hash "$input")
echo "Hash value using Bash: $hash_result"
