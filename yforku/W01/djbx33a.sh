#!/bin/bash
# START: Thu 15 Feb 2024 13:00



# DJBX33A hash function implementation in Bash

djb_x33a_hash() {
    local str="$1"
    local hash=5381
    local i=0
    local c

    while [ $i -lt ${#str} ]; do
        c=$(printf '%d' "'${str:i:1}")
        (( hash = ((hash << 5) + hash) + c ))  # hash * 33 + c
        (( i++ ))
    done

    echo "$hash"
}

# Test the function
test_string="The DJBX33A result with C and Bash should be the same"
hash_value=$(djb_x33a_hash "$test_string")
echo "Hash value of '$test_string' using DJBX33A: $hash_value"


