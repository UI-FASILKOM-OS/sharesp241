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
	const char *input = "The DJBX33A result with C and Bash should be the same";
	uint32_t hash_result = djb2_hash(input);
	printf("Hash value using C: %u\n", hash_result);
	return 0;
}
