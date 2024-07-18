#include <stdio.h>
#include <string.h>

#define T 3

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void) {
	char dest[50] = "Hello";
	char src[] = ", world!";
	unsigned int nb = T;

	printf("Antes da concatenacao: %s\n", dest);
	ft_strncat(dest, src, nb);
	printf("Depois da concatenacao: %s\n", dest);

	return 0;
}
