#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int *range = NULL;
	int min = -5;
	int max = 10;

	int size = ft_ultimate_range(&range, min, max);

	if (size >= 0)
	{
		printf("Valores no intervalo [%d, %d):\n", min, max);
		for (int i = 0; i < size; i++)
		{
			printf("%d ", range[i]);
		}
		printf("\n");

		free(range); // Não se esqueça de liberar a memória alocada
	}
	else
	{
		printf("Erro ao criar o intervalo.\n");
	}

	return 0;
}
