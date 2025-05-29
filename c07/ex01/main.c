#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*vet;
	int	min;
	int	max;
	int	i;

	min = -5;
	max = 10;
	vet = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", vet[i]);
		i++;
	}
	printf("\n");
	free(vet);
	return (0);
}