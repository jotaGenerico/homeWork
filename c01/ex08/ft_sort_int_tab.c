#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	i = 1;

	int j;
	int temp;
	int tamanho = size;

	while(i < tamanho){
		j = i;
		while(j > 0){
			if(tab[j] < tab[j - 1]){
				temp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = temp;
			}
			else{
				break ;
			}
			j--;
		}
		i++;
	}
}
