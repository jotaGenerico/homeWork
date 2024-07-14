#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	linha(int len, char begin, char mid, char end)
{
	int	i;

	i = 1;
	while (i <= len)
	{
		if (i == 1)
			ft_putchar(begin);
		else if (i > 1 && i < len)
			ft_putchar(mid);
		if (i == len)
			ft_putchar(end);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			linha(x, 'o', '-', 'o');
		else if (i <= (y - 1))
			linha(x, '|', ' ', '|');
		if (i == y)
			linha(x, 'o', '-', 'o');
		i++;
	}
}

int	main(void)
{
	rush(9, 3);
	return (0);
}
