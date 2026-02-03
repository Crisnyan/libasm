#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char *ft_strdup(const char * s);

int main() {
	const char *s1 = "TEST";
	const char *s2 = "";
	const char *s3 = 0;

	char *res1 = ft_strdup(s1);
	char *res2 = ft_strdup(s2);

	printf("MINE\n");
	printf("Normal: %s\n", res1);
	printf("Empty string: %s\n", res2);

	if (res1) free(res1);
	if (res2) free(res2);

	// SEGFAULT
	// char *res3 = ft_strdup(s3);
	// printf("Null string: %s\n", res3);
	// if (res3) free(res3);

	char *res4 = strdup(s1);
	char *res5 = strdup(s2);

	printf("OG\n");
	printf("Normal: %s\n", res4);
	printf("Empty string: %s\n", res5);

	if (res4) free(res4);
	if (res5) free(res5);

	// SEGFAULT
	// char *res6 = strdup(s3);
	// printf("Null string: %s\n", res6);
	// if (res6) free(res6);
}
