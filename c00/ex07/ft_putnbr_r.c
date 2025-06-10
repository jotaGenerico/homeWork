/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 12:54:02 by jose-cad          #+#    #+#             */
/*   Updated: 2025/05/30 14:25:03 by jose-cad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
