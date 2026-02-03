#include <stdio.h>
#include <unistd.h>
#include <errno.h>

extern ssize_t ft_write(int fd, const void *buf, size_t count);

int main() {
	char buf[5] = "hello";
	errno = 0;
	
	printf("MINE\n");
	printf("\nTest: %ld\n", ft_write(1, buf, sizeof(buf)));
	printf("\nBad file: %ld\n", ft_write(-1, buf, sizeof(buf)));
	printf("Errno is: %d\n\n", errno);

	errno = 0;
	printf("OG\n");
	printf("\nTest: %ld\n", write(1, buf, sizeof(buf)));
	printf("\nBad file: %ld\n", write(-1, buf, sizeof(buf)));
	printf("Errno is: %d\n", errno);
}
