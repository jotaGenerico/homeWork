#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	array[] = {5, 2, 9, 1, 5, 6};
	int	size = sizeof(array) / sizeof(array[0]);
	int	i;

	printf("Array antes da ordenação:\n");
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");

	ft_sort_int_tab(array, size);

	printf("Array depois da ordenação:\n");
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
	return (0);
}
