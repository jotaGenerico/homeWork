#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	string[] = "42 - confia no processo!";
	int tamanho;

	tamanho = ft_strlen(string);
	printf("%d\n", tamanho);

	char string1[] = "";

	tamanho = ft_strlen(string1);
	printf("%d\n", tamanho);
	return (0);
}
