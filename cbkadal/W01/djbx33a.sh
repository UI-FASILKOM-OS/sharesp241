#!/bin/bash
# START: Thu 15 Feb 2024 13:00



# DJBX33A hash function implementation in Bash

djb_x33a_hash() {
    local str="$1"
    local hash=5381
    local i=0
    local char

    for ((i=0; i<${#str}; i++)); do
        char=${str:$i:1}
        hash=$((hash * 33 + $(printf "%d" "'$char")))
    done
    echo $((hash & 0x7FFFFFFF))
}

# Test the function
test_string="The DJBX33A result with C and Bash should be the same"
hash_value=$(djb_x33a_hash "$test_string")
echo "Hash value of '$test_string' using DJBX33A: $hash_value"

exit

