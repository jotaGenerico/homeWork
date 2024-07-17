#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
	int tab[] = {5, 2, 6, 1, 3};
	int size = sizeof(tab) / sizeof(tab[0]);

	printf("Antes da ordenação: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("Depois da ordenação: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	return 0;
}
