#include <stdio.h>
#include <string.h>

extern char *ft_strcpy(char * restrict dst, const char * restrict src);

int main() {
	const char *src = "TEST";
	char dst1[] = "UNICICLE";
	char dst2[] = "a";

	printf("MINE\n");
	printf("Same: %s\n", ft_strcpy(dst1, dst1));
	printf("Normal: %s\n", ft_strcpy(dst1, src));
	//BUFFER OVERFLOW
	// printf("src longer than dst: %s\n", ft_strcpy(dst2, src));
	//SEGFAULT
	// printf("No src: %s\n", ft_strcpy(dst1, (char *)0x0));
	// printf("no dst: %s\n", ft_strcpy((char *)0x0, src));

	printf("dst after: %s\n", dst1);

	const char *src2 = "TEST";
	char dst12[] = "UNICICLE";
	char dst22[] = "a";

	printf("OG\n");
	printf("Same: %s\n", strcpy(dst12, dst12));
	printf("Normal: %s\n", strcpy(dst12, src2));
	//BUFFER OVERFLOW
	// printf("src longer than dst: %s\n", strcpy(dst22, src2));
	//SEGFAULT
	// printf("No src: %s\n", strcpy(dst12, (char *)0x0));
	// printf("no dst: %s\n", strcpy((char *)0x0, src2));
	//
	printf("dst after: %s\n", dst12);
}
