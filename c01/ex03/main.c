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

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a, b;
	int divisao, modulo;
	int *div, *mod;

	a = 42;
	b = 10;
	div = &divisao;
	mod = &modulo;

	ft_div_mod(a, b, div, mod);

	printf("valor de a - b: %d - %d\n", a, b);
	printf("divisao: %d\n", divisao);
	printf("modulo: %d\n", modulo);
}
