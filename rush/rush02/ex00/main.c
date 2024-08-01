/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cda <jose-cda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:00:35 by jose-cda          #+#    #+#             */
/*   Updated: 2024/07/28 21:20:03 by jose-cda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"rush-02.h"

void	validate_arguments(int argc, char **argv, char **dict_file,
char **number)
{
	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		exit(1);
	}
	if (argc == 2)
	{
		*dict_file = "numbers.dict";
		*number = argv[1];
	}
	else
	{
		*dict_file = argv[1];
		*number = argv[2];
	}
	if (!is_valid_number(*number))
	{
		ft_putstr("Error\n");
		exit(1);
	}
}

int	main(int argc, char **argv)
{
	char	*dict_file;
	char	*number;

	validate_arguments(argc, argv, &dict_file, &number);
	read_dict(dict_file);
	process_number(number);
	free_dict();
	return (0);
}
