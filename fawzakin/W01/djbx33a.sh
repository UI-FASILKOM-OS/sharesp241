#!/usr/bin/env bash
text="The DJBX33A result with C and Bash should be the same"
hash_num=5381
for (( i=0; i<${#text}; i++ )); do
  charr="${text:$i:1}"
  ascii=$(printf "%d" "'$charr")
  hash_num=$((hash_num*33+ascii))
done
printf "Hash value of '%s' using DJBX33A is %s" "$text" "$hash_num" 
