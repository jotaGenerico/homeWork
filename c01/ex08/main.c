#include <stdio.h>

void
 ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	array[] = {5, 3, 7, 1, 2, 4, 9, 8, 0, 6};
	int	size;
	int	i;

	size = 10;
	i = 0;

	printf("Array desordenado:\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}

	ft_sort_int_tab(array, size);

	printf("\nArray ordenado:\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}
