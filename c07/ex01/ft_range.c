/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cda <jose-cda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:31:52 by jose-cda          #+#    #+#             */
/*   Updated: 2024/07/30 09:54:17 by jose-cda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*vet;
	int	i;

	vet = NULL;
	if (min >= max)
		return (0);
	vet = malloc(sizeof(int) * (max - min));
	if (!vet)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		vet[i] = max - i -1;
		i++;
	}
	return (vet);
}
