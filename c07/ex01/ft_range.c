#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int *vet;
	int i;

	vet = NULL;
	if (min > max)
		return (0);
	vet = malloc(sizeof(int) * (max - min));
	if (vet == NULL)
		return (0);
	while (i < (max - min))
	{
		vet[i] = min + i;
		i++;
	}
	return (vet);
}