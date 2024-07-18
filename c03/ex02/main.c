#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main() {
	char dest[50] = "Hello";
	char src[] = ", world!";

	printf("Antes da concatenacao: %s\n", dest);
	ft_strcat(dest, src);
	printf("Depois da concatenacao: %s\n", dest);

	return 0;
}
