/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 08:07:00 by jose-cad          #+#    #+#             */
/*   Updated: 2025/06/02 08:31:57 by jose-cad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0)
		{
			if (tab[j] < tab[j - 1])
			{
				temp = tab[j - 1];
				tab[j -1] = tab[j];
				tab[j] = temp;
			}
			else
				break ;
			j--;
		}
		i++;
	}
}
