#include "rush01.h"

int	**allocate_2d_array(void)
{
	int	**arr;
	int	i;

	arr = (int **)malloc(4 * sizeof(int *));
	if (!arr)
		print_error();
	i = 0;
	while (i < 4)
	{
		arr[i] = (int *)malloc(4 * sizeof(int));
		if (!arr[i])
		{
			while (i > 0)
			{
				i--;
				free(arr[i]);
			}
			free(arr);
			print_error();
		}
		i++;
	}
	return (arr);
}

void	free_2d_array(int **arr)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	compare_matrices(int input[4][4], int gui[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (input[i][j] != gui[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_solved(int **grid)
{
	char	c;
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
