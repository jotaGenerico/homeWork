/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 08:06:45 by jose-cad          #+#    #+#             */
/*   Updated: 2025/06/02 08:06:51 by jose-cad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	begin;
	int	end;
	int	temp;

	begin = 0;
	end = size - 1;
	while (begin < end)
	{
		temp = tab[begin];
		tab[begin] = tab[end];
		tab[end] = temp;
		begin++;
		end--;
	}
}
