#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = sizeof(tab) / sizeof(tab[0]);

	printf("Antes da reversão: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	ft_rev_int_tab(tab, size);

	printf("Depois da reversão: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	return 0;
}
