#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int *digits, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(digits[i] + '0');
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	digits[n];
	int	i;

	if (n <= 0 || n > 9)
		return ;
	i = 0;
	while (i < n)
	{
		digits[i] = i;
		i++;
	}
	while (digits[0] <= 9 - n)
	{
		ft_print_number(digits, n);
		if (digits[0] != 9 - n)
			write(1, ", ", 2);
		i = n - 1;
		while (i > 0 && digits[i] == 9 - (n - 1 - i))
			i--;
		digits[i]++;
		while (++i < n)
			digits[i] = digits[i - 1] + 1;
	}
	write(1, "\n", 1);
}

int main(void)
{
	ft_print_combn(1);
	ft_print_combn(2);
	ft_print_combn(3);
	ft_print_combn(4);
	return (0);
}
