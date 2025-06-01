/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_forty-two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drown-ed <drown-ed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 8888/88/88 88:88:88 by drown-ed          #+#    #+#             */
/*   Updated: 8888/88/88 88:88:88 by drown-ed         ###   ########.SP       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_validate_base(char *base);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_recursive_atoa(int nbr, int base_len, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;

	base_len = ft_validate_base(base);
	if (base_len < 2)
		return ;
	else
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		ft_recursive_atoa(nbr, base_len, base);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_validate_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (ft_strlen(base) < 2 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (ft_strlen(base));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_recursive_atoa(int nbr, int base_len, char *base)
{
	if (nbr >= base_len)
		ft_recursive_atoa(nbr / base_len, base_len, base);
	ft_putchar(base[nbr % base_len]);
}
