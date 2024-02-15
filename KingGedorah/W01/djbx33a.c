#include <stdio.h>
#include <stdint.h>

uint32_t djb2_hash(const char *str) {
    uint32_t hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return hash;
}

int main() {
    char input[] = "The DJBX33A result with C and Bash should be the same";
    uint32_t result = djb2_hash(input);
    printf("Value for string 'The DJBX33A result with C and Bash should be the same' using C is : %u\n", result);
    return 0;
}

