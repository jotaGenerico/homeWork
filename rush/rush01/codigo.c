#include <unistd.h>
#include <stdlib.h>

#define SIZE 4

void print_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void print_solution(int grid[SIZE][SIZE])
{
	char c;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j < SIZE - 1)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int is_valid(int grid[SIZE][SIZE], int row, int col, int num, int clues[SIZE * 4])
{
	// Implemente a lógica de validação aqui
	// Verifique se o número já existe na linha ou coluna
	// Verifique se o número satisfaz as dicas (clues)
	return 1; // Temporário, substitua pela lógica real
}

int solve(int grid[SIZE][SIZE], int row, int col, int clues[SIZE * 4])
{
	if (row == SIZE)
		return 1; // Solução encontrada

		if (col == SIZE)
			return solve(grid, row + 1, 0, clues);

	for (int num = 1; num <= SIZE; num++)
	{
		if (is_valid(grid, row, col, num, clues))
		{
			grid[row][col] = num;
			if (solve(grid, row, col + 1, clues))
				return 1;
			grid[row][col] = 0; // Backtrack
		}
	}
	return 0; // Nenhuma solução encontrada
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		print_error();

	int clues[SIZE * 4];
	int grid[SIZE][SIZE] = {{0}};

	// Parse os argumentos e preencha o array clues
	// Implemente a lógica de parsing aqui

	if (solve(grid, 0, 0, clues))
		print_solution(grid);
	else
		print_error();

	return 0;
}
