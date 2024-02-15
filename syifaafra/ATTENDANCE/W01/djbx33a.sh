#!/bin/bash

str="The DJBX33A result with C and Bash should be the same"

# Calculate and store the Bash hash using md5sum
bash_hash=$(echo -n "$str" | md5sum | cut -d' ' -f1)

# Check if the C executable exists
if [[ ! -f dbjx33a ]]; then
  echo "Error: C executable 'dbjx33a' not found."
  exit 1
fi

# Run the C executable and capture its output
c_hash=$(./dbjx33a)

# Check if the C executable exited successfully
if [[ $? -ne 0 ]]; then
  echo "Error: C executable failed to run."
  exit 1
fi

# Print the calculated hashes
printf "DJBX33A hash (Bash): %s\n" "$bash_hash"
printf "DJBX33A hash (C): %s\n" "$c_hash"

# Correctly compare the hashes using double square brackets
if [[ "$c_hash" == "$bash_hash" ]]; then
  echo "Hashes match!"
else
  echo "Hashes differ!"
fi

