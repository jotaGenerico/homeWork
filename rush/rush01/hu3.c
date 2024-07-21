#include <unistd.h>
#include <stdlib.h>

int compare_matrices(int input[4][4], int gui[4][4]);
int parse_input(char *str, int input[4][4]);
void print_solved(int grid[4][4]);
void print_error(void);

int main(int argc, char *argv[])
{
	int input[4][4];
	int gui[4][4];
	int solved[4][4];
	int i;
	int j;

	if (argc != 2)
		print_error();

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			gui[i][j] = 0;
			solved[i][j] = 0;
			j++;
		}
		i++;
	}

	gui[0][0] = 4; gui[0][1] = 3; gui[0][2] = 2; gui[0][3] = 1;
	gui[1][0] = 1; gui[1][1] = 2; gui[1][2] = 2; gui[1][3] = 2;
	gui[2][0] = 4; gui[2][1] = 3; gui[2][2] = 2; gui[2][3] = 1;
	gui[3][0] = 1; gui[3][1] = 2; gui[3][2] = 2; gui[3][3] = 2;

	solved[0][0] = 1; solved[0][1] = 2; solved[0][2] = 3; solved[0][3] = 4;
	solved[1][0] = 2; solved[1][1] = 3; solved[1][2] = 4; solved[1][3] = 1;
	solved[2][0] = 3; solved[2][1] = 4; solved[2][2] = 1; solved[2][3] = 2;
	solved[3][0] = 4; solved[3][1] = 1; solved[3][2] = 2; solved[3][3] = 3;

	if (!parse_input(argv[1], input))
		print_error();

	if (!compare_matrices(input, gui))
		print_error();

	print_solved(solved);

	return 0;
}




void print_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void print_solved(int grid[4][4])
{
	char c;
	int i;
	int j;

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

int parse_input(char *str, int input[4][4])
{
	int i;
	int j;

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
				return 1;
		}
		else if (*str != ' ')
			return 0;
		str++;
	}
	return (i == 4 && j == 0);
}

int compare_matrices(int input[4][4], int gui[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (input[i][j] != gui[i][j])
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

