#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		write(1, &"0123456789"[nb % 10], 1);
	}
}
