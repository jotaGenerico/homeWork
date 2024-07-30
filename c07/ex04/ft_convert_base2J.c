/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cda <jose-cda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:10:57 by jose-cda          #+#    #+#             */
/*   Updated: 2024/07/30 10:10:58 by jose-cda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_checkbase(char *str);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] >= 9 || str[i] <= 13))
		i++;
	sign = 1;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	nb = 0;
	while (str[i] && ft_find_index(str[i], base) >= 0)
	{
		nb = nb * ft_strlen(base) + ft_find_index(str[i], base);
		i++;
	}
	return (nb * sign);
}

int	ft_nbrlen(long nbr, int base_len)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 0)
	{
		nbr /= base_len;
		i++;
	}
	return (i);
}

char	*ft_putnbr(long nbr, char *base, int nb_size)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(sizeof(char) * (nb_size + 1));
	if (nbr == 0)
		result[0] = base[nbr % ft_strlen(base)];
	if (!result)
		return (0);
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		result[(nb_size - 1) - i] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
		i++;
	}
	result[nb_size] = '\0';
	return (result);
}
