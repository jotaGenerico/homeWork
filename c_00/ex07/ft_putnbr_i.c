#include <unistd.h>

void	ft_putchar(char c);
void	ft_putint(int nbr);
void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 2147483647)
		write(1, "2147483647", 10);
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		ft_putint(nb);
	}
	else
		ft_putint(nb);
}

void	ft_putint(int nbr)
{
	char	string_nbr[12];
	int		i;
	int		negative;

	i = 0;
	negative = 0;
	if (nbr == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nbr < 0)
	{
		negative = 1;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		string_nbr[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (negative)
		ft_putchar('-');
	while (i > 0)
		ft_putchar(string_nbr[--i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_putnbr(2147483647);
	return 0;
}
