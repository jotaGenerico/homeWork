/* ************************************************************************** */
/* */
/* :::      ::::::::   */
/* ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/* +:+ +:+         +:+     */
/* By: seu_login@student.42.fr                  +#+  +:+       +#+        */
/* +#+#+#+#+#+   +#+           */
/* Created: 2023/XX/XX XX:XX:XX by seu_login         #+#    #+#             */
/* Updated: 2023/XX/XX XX:XX:XX by seu_login        ###   ########.fr       */
/* */
/* ************************************************************************** */

#include <unistd.h>

static int	is_safe(int col, int *queens);
static void	print_solution(int *queens);
static void	solve(int col, int *queens, int *count);

int	ft_ten_queens_puzzle(void)
{
	int queens[10];
	int count;
	int i;

	count = 0;
	i = 0;
	while (i < 10)
	{
		queens[i] = 0;
		i++;
	}
	solve(0, queens, &count);
	return (count);
}

static void	solve(int col, int *queens, int *count)
{
	int row;

	if (col == 10)
	{
		print_solution(queens);
		(*count)++;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		queens[col] = row;
		if (is_safe(col, queens))
			solve(col + 1, queens, count);
		row++;
	}
}

static int	is_safe(int col, int *queens)
{
	int i;
	int diff;

	i = 0;
	while (i < col)
	{
		diff = queens[col] - queens[i];
		if (diff < 0)
			diff = -diff;
		if (queens[i] == queens[col] || diff == col - i)
			return (0);
		i++;
	}
	return (1);
}

static void	print_solution(int *queens)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = queens[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}
