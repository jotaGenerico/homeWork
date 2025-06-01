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

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int	array[10];
	int	i;

	size = 10;
	i = 0;
	while (i < size)
	{
		array[i] = i;
		i++;
	}
	printf("Array ordenado:\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	ft_rev_int_tab(array, size);
	printf("\nArray invertido:\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}
