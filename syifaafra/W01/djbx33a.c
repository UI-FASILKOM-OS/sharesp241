#include <stdio.h>

unsigned long long hash(const char *str) {
    unsigned long long hash = 5381;
    while (*str) {
        hash = ((hash << 5) + hash) + (*str++);
    }
    return hash;
}

int main() {
    const char *str = "The DJBX33A result with C and Bash should be the same";
    unsigned long long c_hash = hash(str);

    printf("DJBX33A hash (C): %llu\n", c_hash);

    return 0;
}

