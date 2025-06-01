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

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	char	buffer[2];

	int		nbr;
	int		*ptr1;
	int		**ptr2;
	int		***ptr3;
	int		****ptr4;
	int		*****ptr5;
	int		******ptr6;
	int		*******ptr7;
	int		********ptr8;
	int		*********ptr9;

	nbr = 0;
	ptr1 = &nbr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

	buffer[0] = '0' + (nbr / 10);
	buffer[1] = '0' + (nbr % 10);

	write(1, "Valor original: ", 16);
	write(1, buffer, 1);
	write(1, "\n", 1);

	ft_ultimate_ft(ptr9);

	buffer[0] = '0' + (*********ptr9 / 10);
	buffer[1] = '0' + (*********ptr9 % 10);

	write(1, "Valor alterado: ", 16);
	write(1, buffer, 2);
	write(1, "\n", 1);

	return (0);
}
