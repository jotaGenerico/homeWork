#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putint(int nbr);

void	ft_putint(int nbr)
{
	if (nbr > 9)
		ft_putint(nbr / 10);
	nbr = '0' + nbr % 10;
	write(1, &nbr, 1);
}

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_putnbr(2147483647);
	return 0;
}
