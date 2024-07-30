#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str);
int ft_total_size(int size, char **strs, char *sep);
char *ft_strcat(char *dest, char *src);
char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char *strs[] = {"May", "the", "Force", "be", "with", "you!"};
	int size = 6;
	char *sep = " ";

	char *result = ft_strjoin(size, strs, sep);

	if (result)
	{
		printf("Texto concatenado: %s\n", result);

		free(result);
	}
	else
	{
		printf("Erro ao concatenar o texto.\n");
	}

	return 0;
}
