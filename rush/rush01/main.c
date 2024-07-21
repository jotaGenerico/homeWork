#include "rush01.h"

int	parse_input(char *str, int input[4][4]);
void	print_error(void);

int	main(int argc, char *argv[])
{
	int	input[4][4];
	int	gui[4][4];
	int	**solved;

	if (argc != 2)
	{
		print_error();
	}
	initialize_gui(gui);
	solved = allocate_2d_array();
	initialize_solved(solved);
	if (!parse_input(argv[1], input))
	{
		free_2d_array(solved);
		print_error();
	}
	if (!compare_matrices(input, gui))
	{
		free_2d_array(solved);
		print_error();
	}
	print_solved(solved);
	free_2d_array(solved);
	return (0);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

int	parse_input(char *str, int input[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*str)
	{
		if (*str >= '1' && *str <= '4')
		{
			input[i][j] = *str - '0';
			j++;
			if (j == 4)
			{
				j = 0;
				i++;
			}
			if (i == 4)
				return (1);
		}
		else if (*str != ' ')
			return (0);
		str++;
	}
	return (i == 4 && j == 0);
}
