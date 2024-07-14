#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0)
		{
			if (tab[j] < tab[j - 1])
			{
				temp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = temp;
			}
			else
			{
				break ;
			}
			j--;
		}
		i++;
	}
}
