#include <stdlib.h>
#include <stdio.h>


int *ft_range(int min, int max);

int main()
{
	int min = 5;
	int max = 10;

	int *result = ft_range(min, max);

	if (result)
	{
		printf("Valores no intervalo [%d, %d):\n", min, max);
		for (int i = 0; i < (max - min); i++)
		{
			printf("%d ", result[i]);
		}
		printf("\n");

		free(result); // Não se esqueça de liberar a memória alocada
	}
	else
	{
		printf("Erro ao criar o intervalo.\n");
	}

	return 0;
}
