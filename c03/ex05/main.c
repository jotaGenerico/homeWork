#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "world!";
	unsigned int size = sizeof(dest);

	unsigned int result = ft_strlcat(dest, src, size);

	printf("Result: %u\n", result);
	printf("Concatenated string: %s\n", dest);

	return 0;
}
