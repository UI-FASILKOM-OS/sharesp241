#include <stdio.h>

unsigned int djb2_hash(const char *str) {
    unsigned int hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return hash;
}

int main() {
    char *str = "The DJBX33A result with C and Bash should be the same";
    unsigned int hash = djb2_hash(str);
    printf("Hash of '%s' is: %u\n", str, hash);
    return 0;
}
