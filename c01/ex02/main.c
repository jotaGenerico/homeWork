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

#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int	nbr1;
	int nbr2;
	int *a;
	int *b;

	nbr1 = 2;
	nbr2 = 4;
	a = &nbr1;
	b = &nbr2;

	printf("valor 1: %d\n", nbr1);
	printf("valor 2: %d\n", nbr2);
	printf("trocando\n");
	ft_swap(a, b);
	printf("valor 1: %d\n", nbr1);
	printf("valor 2: %d\n", nbr2);
}
