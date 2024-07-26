#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
void	ft_putchar(char c);
void	ft_putnbr_base_recursiva(long nbr, char *base, int base_len);
int		ft_strlen(char *str);

int	validar(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
	{
		return (0);
	}
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_recursiva(long nbr, char *base, int base_len)
{
	if (nbr >= base_len)
		ft_putnbr_base_recursiva(nbr / base_len, base, base_len);
	ft_putchar(base[nbr % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	nb;

	base_len = ft_strlen(base);
	if (!validar(base))
		return ;
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	ft_putnbr_base_recursiva(nb, base, base_len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
