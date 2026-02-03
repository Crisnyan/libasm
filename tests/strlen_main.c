#include <stdio.h>
#include <string.h>

extern size_t ft_strlen(const char *s);

int main() {
	const char *src = "TEST";
	const char *none = "";
	const char *null = 0;

	printf("MINE\n");
	printf("Normal: %ld\n", ft_strlen(src));
	printf("Empty string: %ld\n", ft_strlen(none));
	// SEGFAULT
	// printf("NULL string: %ld\n", ft_strlen(null));

	printf("OG\n");
	printf("Normal: %ld\n", strlen(src));
	printf("Empty string: %ld\n", strlen(none));
	// SEGFAULT
	// printf("NULL string: %ld\n", strlen(null));
}
