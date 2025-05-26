void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	begin;
	int	end;
	int	temp;

	begin = 0;
	end = size - 1;
	while (begin < end)
	{
		temp = tab[begin];
		tab[begin] = tab[end];
		tab[end] = temp;
		begin++;
		end--;
	}
}
