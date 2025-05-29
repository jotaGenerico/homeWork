#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[] = {"42", "-", "confia", "no", "processo!"};
	char	*sep = " ";
	int		size = 5;

	char	*result = ft_strjoin(size, strs, sep);
	if (result)
	{
		printf("concatenado: %s\n", result);
		free(result);
	}
	else
		printf("erro.\n");
	return (0);
}