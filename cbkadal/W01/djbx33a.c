/* 
 * Copyright (C) 2024-2024 Y. Forku
 * This free software is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * START: Thu 15 Feb 2024 13:00
 */

#include <stdio.h>
#include <stdint.h>

uint32_t djbx33a_hash(const char* str) {
    uint32_t hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return hash;
}

int main() {
    const char* test_string = "The DJBX33A result with C and Bash should be the same";
    uint32_t hash_value = djbx33a_hash(test_string);
    printf("Hash value of '%s' using DJBX33A: %u\n", test_string, hash_value);
    return 0;
}


