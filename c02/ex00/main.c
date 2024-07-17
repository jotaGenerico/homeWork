#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
	char src[] = "42 - confia no processo";
	char dest[100];

	ft_strcpy(dest, src);

	printf("Texto copiado: %s\n", dest);

	return 0;
}
