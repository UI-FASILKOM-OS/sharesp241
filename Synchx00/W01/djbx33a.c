#include <stdio.h>

unsigned long djbX33A_hash(const char *str) {
    unsigned long hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return hash;
}

int main() {
    const char *input = "The DJBX33A result with C and Bash should be the same";
    unsigned long hash = djbX33A_hash(input);
    printf("Hash value (C): %lu\n", hash);
    return 0;
}
