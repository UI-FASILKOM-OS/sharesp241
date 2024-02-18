#include <stdint.h>

uint32_t djb(const char *str) {
    uint32_t hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c; // hash * 33 + c
    }

    return hash;
}

int main() {
    const char *input = "The DJBX33A result with C and Bash should be the same";
    uint32_t res = djb(input);

    printf("%u\n", res);

    return 0;
}
