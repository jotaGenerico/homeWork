#include <stdio.h>

int ft_strlen(char *str);

int main()
{
	char str[] = "confia no processo";
	int len;

	len = ft_strlen(str);

	printf("O tamanho da string é: %d\n", len);

	return 0;
}
