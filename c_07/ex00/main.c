#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char str_o[] = "42 - confia no processo";
    char *str_d;

	str_d = ft_strdup(str_o);
    if (str_d != 0)
	{
		printf("original: %s\n", str_o);
        printf("duplicada: %s\n", str_d);
        free(str_d);
    }
	else
		printf("Erro ao duplicar a string.\n");
	return (0);
}