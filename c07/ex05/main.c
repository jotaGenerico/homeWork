#include <stdlib.h>
#include <stdio.h> // Lembre-se de remover o comentário para incluir a biblioteca stdio.h

char *ft_add_word(char *src, int size);
int ft_is_charset(char c, char *charset);
int ft_count_word_len(char *str, char *charset);
int ft_count_word(char *str, char *charset);
char **ft_split(char *str, char *charset);

int main()
{
	char *str = "Hello,world,,from,the,other,side";
	char *charset = ",";

	char **result = ft_split(str, charset);

	if (result)
	{
		int i = 0;
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			free(result[i]); // Libere a memória alocada para cada palavra
			i++;
		}

		free(result); // Libere a memória alocada para o array de palavras
	}
	else
	{
		printf("Erro ao dividir a string.\n");
	}

	return 0;
}
