#include <stdio.h>
#include <unistd.h>
#include <errno.h>

extern ssize_t ft_read(int fd, void *buf, size_t count);

int main() {
	char buf[5] = "hello";
	errno = 0;
	
	printf("MINE\n");
	printf("Buffer before read: %s\n", buf);
	printf("Test: %ld\n", ft_read(0, buf, sizeof(buf)));
	printf("Buffer after read: %s\n", buf);
	printf("Bad file: %ld\n", ft_read(-1, buf, sizeof(buf)));
	printf("Errno is: %d\n\n", errno);

	errno = 0;
	printf("OG\n");
	printf("Buffer before read: %s\n", buf);
	printf("Test: %ld\n", read(0, buf, sizeof(buf)));
	printf("Buffer after read: %s\n", buf);
	printf("Bad file: %ld\n", read(-1, buf, sizeof(buf)));
	printf("Errno is: %d\n\n", errno);
}
