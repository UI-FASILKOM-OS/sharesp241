#include <stdio.h>
#include <stdint.h>

uint32_t djb_hash(const char *data) {
    uint32_t hash_value = 5381; // Arbitrary initial value
    unsigned char c;
    while ((c = *data++)) {
        hash_value = ((hash_value << 5) + hash_value) + c;
    }
    return hash_value;
}

int main() {
    const char *input = "The DJBX33A result with C and Bash should be the same";
    uint32_t hash_result = djb_hash(input);
    printf("Hash value using C: %u\n", hash_result);
    return 0;
}
