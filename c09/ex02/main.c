#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	*str = "Hello,world! This is a test.";
	char	*charset = " ,.!";
	char	**result;
	int		i;

	result = ft_split(str, charset);
	if (result)
	{
		i = 0;
		while (result[i])
		{
			printf("Word %d: %s\n", i + 1, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
	{
		printf("Split failed.\n");
	}
	return (0);
}
