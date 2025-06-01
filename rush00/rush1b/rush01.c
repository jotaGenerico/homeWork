void	ft_putchar(char c);

void	print_line(int x, char start, char middle, char end)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar(start);
		}
		else if (i == x - 1)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(middle);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			if (i == 0)
				print_line(x, '/', '*', '\\');
			else if (i == y - 1)
				print_line(x, '\\', '*', '/');
			else
				print_line(x, '*', ' ', '*');
			i++;
		}
	}
}
