#include <stdio.h>
#include <string.h>

extern int ft_strcmp(const char *s1, const char *s2);

int main() {
	char *s1 = "HOLA";
	char *s2 = "HOL";
	char *s3 = "HOLO";
	char *s4 = "HOLAA";

	printf("MINE\n");
	printf("Same: %d\n", ft_strcmp(s1,s1));
	printf("s2 shorter: %d\n", ft_strcmp(s1,s2));
	printf("s2 longer: %d\n", ft_strcmp(s1,s3));
	printf("Last letter different: %d\n", ft_strcmp(s1,s4));

	printf("OG\n");
	printf("Same: %d\n", strcmp(s1,s1));
	printf("s2 shorter: %d\n", strcmp(s1,s2));
	printf("s2 longer: %d\n", strcmp(s1,s3));
	printf("Last letter different: %d\n", strcmp(s1,s4));
}
