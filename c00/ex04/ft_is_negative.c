/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:35:38 by jose-cda          #+#    #+#             */
/*   Updated: 2024/07/15 09:35:44 by jose-cda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	number;

	if (n >= 0)
	{
		number = 'P';
		write(1, &number, 1);
	}
	else
	{
		number = 'N';
		write(1, &number, 1);
	}
}
