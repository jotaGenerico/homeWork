/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cda <jose-cda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:49:42 by jose-cda          #+#    #+#             */
/*   Updated: 2024/07/25 13:08:52 by jose-cda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *program_name);

int	main(int argc, char *argv[])
{
	if (argc > 0)
	{
		ft_print_program_name(argv[0]);
	}
	return (0);
}

void	ft_print_program_name(char *program_name)
{
	while (*program_name != '\0')
	{
		write(1, program_name, 1);
		program_name++;
	}
	write(1, "\n", 1);
}
