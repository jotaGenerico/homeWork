#include <unistd.h>

int		ft_validate_base(char *base);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_recursive_atoa(unsigned int nbr, int base_len, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;

	base_len = ft_validate_base(base);
	if (base_len < 2)
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_recursive_atoa(-(nbr / base_len), base_len, base);
		ft_putchar(base[-(nbr % base_len)]);
		return ;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	ft_recursive_atoa(nbr, base_len, base);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_validate_base(char *base)
{
	int	i;
	int	j;
	int	b_len;

	i = 0;
	b_len = ft_strlen(base);
	while (base[i])
	{
		if (b_len < 2 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (b_len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_recursive_atoa(unsigned int nbr, int base_len, char *base)
{
	if (nbr >= base_len)
		ft_recursive_atoa(nbr / base_len, base_len, base);
	ft_putchar(base[nbr % base_len]);
}
