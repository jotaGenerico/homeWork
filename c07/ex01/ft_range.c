/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cda <jose-cda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:20:51 by jose-cda          #+#    #+#             */
/*   Updated: 2024/07/31 09:21:29 by jose-cda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		arr_size;
	int		*arr;

	if (min >= max)
		return (NULL);
	arr_size = max - min;
	arr = (int *)malloc(sizeof(int) * (arr_size));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
