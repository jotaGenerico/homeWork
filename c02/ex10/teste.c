#include <stdio.h>

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size);

int main() {
	char dest[10];
	char src[] = "Hello, World!";
	unsigned int length = ft_strlcpy(dest, src, sizeof(dest));

	printf("Copied string: %s\n", dest); // Saída: Hello, Wo
	printf("Length of source string: %u\n", length); // Saída: 13

	return 0;
}
