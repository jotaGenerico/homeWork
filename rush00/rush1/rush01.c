void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if (i == 1 && j == 1)
				ft_putchar('/');
			else if (i == 1 && j == x)
				ft_putchar('\\');
			else if (i == y && j == 1)
				ft_putchar('\\');
			else if (i == y && j == x)
				ft_putchar('/');
			else if (i == 1 || i == y)
				ft_putchar('*');
			else if (j == 1 || j == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
