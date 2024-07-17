#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char texto[] = "Hello World!";

	printf("Texto antes da função: %s\n", texto);

	char *resultado = ft_strlowcase(texto);

	printf("Texto depois da função: %s\n", resultado);

	return 0;
}
