/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:31:37 by jose-cad          #+#    #+#             */
/*   Updated: 2025/06/01 13:33:31 by jose-cad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_putstr(char *str);
void	rush(int x, int y);

int	main(int argc, char **argv)
{
	char	*message_error_range;
	char	*message_usage;
	int		x;
	int		y;

	message_error_range = "Error: Dimensions out of range.\n";
	message_usage = "Usage: ./rush x y (Both must be greater than 0)\n";
	if (argc != 3)
	{
		ft_putstr(message_usage);
		return (1);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	if (x <= 0 || y <= 0)
	{
		ft_putstr(message_error_range);
		ft_putstr(message_usage);
		return (1);
	}
	rush(x, y);
	return (0);
}
