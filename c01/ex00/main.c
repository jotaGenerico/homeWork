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

void	ft_ft(int *nbr);
void	ft_print(int nbr);

int	main(void)
{
	int		nbr;
	int		*ptr;

	nbr = 24;
	ptr = &nbr;
	write(1, "valor original\n", 15);
	ft_print(nbr);
	ft_ft(ptr);
	write(1, "valor alterado\n", 15);
	ft_print(nbr);
	return (0);
}

void	ft_print(int nbr)
{
	char	imprimivel;

	if (nbr >= 10)
		ft_print(nbr / 10);
	imprimivel = '0' + nbr % 10;
	write(1, &imprimivel, 1);
}
