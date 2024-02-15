function djb2_hash {
  hash=5381
  for char in "${1// }"; do # Loop through each character, excluding spaces
    hash=$(( (hash * 33) + char ))
  done
  echo "$hash"
}

# Test the function
test_string="The DJBX33A result with C and Bash should be the same"
hash_value=$(djb2_hash "$test_string")
echo "Hash value of '$test_string' using DJBX33A: $hash_value"

exit
