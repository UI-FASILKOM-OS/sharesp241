#!/bin/bash

djb2_hash() {
	local str="$1"
	local hash=5381

	for ((i = 0; i<${#str}; i++)); do
		local c
		c=$(printf "%d" "'${str:i:1}")
		hash=$(( (hash << 5) + hash + c))
	done

	echo $((hash & 0x7FFFFFFF))
}

input="The DJBX33A result with C and Bash should be the same"
result=$(djb2_hash "$input")
echo "Hash value for string 'The DJBX33A result with C and Bash should be the same' using Bash is : $result"
