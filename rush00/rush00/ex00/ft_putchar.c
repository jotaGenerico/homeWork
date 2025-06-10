/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:31:23 by jose-cad          #+#    #+#             */
/*   Updated: 2025/06/01 13:31:33 by jose-cad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int	signal;
	int	result;

	signal = 1;
	result = 0;
	while (*str == ' ' || *str == '-' || *str == '+')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (result > (2147483647 - (*str - '0')) / 10)
		{
			if (signal == 1)
				return (-1);
			else
				return (-1);
		}
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * signal);
}
