/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 12:57:45 by jose-cad          #+#    #+#             */
/*   Updated: 2025/06/01 11:49:13 by jose-cad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_increment_string(char *str, int n)
{
	int	i;
	int	j;

	i = n - 1;
	while (i >= 0)
	{
		if (str[i] < '9' - (n - 1 - i))
		{
			str[i]++;
			j = i + 1;
			while (j < n)
			{
				str[j] = str[j - 1] + 1;
				j++;
			}
			break ;
		}
		i--;
	}
}

void	ft_create_strings(int n)
{
	char	string_i[11];
	char	string_f[11];
	int		i;
	int		f;

	i = 0;
	f = 10 - n;
	while (i < n)
	{
		string_i[i] = '0' + i;
		string_f[i] = '0' + f;
		i++;
		f++;
	}
	string_i[i] = '\0';
	string_f[i] = '\0';
	while (1)
	{
		ft_putstr(string_i);
		if (string_i[0] != '9' - n + 1)
			write(1, ", ", 2);
		if (string_i[0] == string_f[0] && string_i[n - 1] == string_f[n - 1])
			break ;
		ft_increment_string(string_i, n);
	}
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < 10)
		ft_create_strings(n);
}
