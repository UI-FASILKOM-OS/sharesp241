#!/bin/bash

# Function to calculate the DJBX33A hash
djb2() {
    str=$1
    hash=5381

    for (( i=0; i<${#str}; i++ )); do
        c=$(printf "%d" "'${str:$i:1}")
        hash=$(( (hash << 5) + hash + c )) # hash * 33 + c
    done

    printf "%x\n" $hash
}

# Main script
str="The DJBX33A result with C and Bash should be the same"
hash=$(djb2 "$str")
echo "Hash: $hash"

