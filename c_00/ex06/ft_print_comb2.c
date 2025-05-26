#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int first, int second);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_putnbr(first, second);
			if (first != 98 || second != 99)
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int first, int second)
{
	ft_putchar(first / 10 + '0');
	ft_putchar(first % 10 + '0');
	write(1, " ", 1);
	ft_putchar(second / 10 + '0');
	ft_putchar(second % 10 + '0');
}

int main(void){
	ft_print_comb2();
	return 0;
}
