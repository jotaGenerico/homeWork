#include <unistd.h>
#include <stdlib.h>

#define SIZE 4

// ... (funções auxiliares como print_error e print_solution permanecem inalteradas)

// Verifica se um número pode ser colocado em uma determinada linha
int check_row(int grid[SIZE][SIZE], int row, int num)
{
	for (int i = 0; i < SIZE; i++)
		if (grid[row][i] == num)
			return 0;
	return 1;
}

// Verifica se um número pode ser colocado em uma determinada coluna
int check_col(int grid[SIZE][SIZE], int col, int num)
{
	for (int i = 0; i < SIZE; i++)
		if (grid[i][col] == num)
			return 0;
	return 1;
}

// Verifica se uma linha ou coluna satisfaz a dica dada
int check_view(int view, int line[SIZE])
{
	int max = 0;
	int count = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
	}
	return count == view;
}

// Verifica se todas as dicas são satisfeitas pela grade atual
int check_views(int grid[SIZE][SIZE], int clues[SIZE * 4])
{
	int line[SIZE];

	// Verifica as dicas de cima, baixo, esquerda e direita
	// ... (código omitido para brevidade)

	return 1;
}

// Função principal de resolução usando backtracking
int solve(int grid[SIZE][SIZE], int row, int col, int clues[SIZE * 4])
{
	// Se chegamos ao final da grade, verificamos se todas as dicas são satisfeitas
	if (row == SIZE)
		return check_views(grid, clues);

	// Se chegamos ao final de uma linha, passamos para a próxima
	if (col == SIZE)
		return solve(grid, row + 1, 0, clues);

	// Tentamos colocar números de 1 a 4 na posição atual
	for (int num = 1; num <= SIZE; num++)
	{
		// Se o número é válido para esta posição
		if (check_row(grid, row, num) && check_col(grid, col, num))
		{
			grid[row][col] = num;
			// Recursivamente tentamos preencher o resto da grade
			if (solve(grid, row, col + 1, clues))
				return 1;
			grid[row][col] = 0; // Backtrack se não encontrarmos uma solução
		}
	}
	return 0; // Nenhuma solução encontrada
}

// Analisa a string de entrada e preenche o array de dicas
int parse_clues(char *str, int clues[SIZE * 4])
{
	int i = 0;
	while (*str)
	{
		if (*str >= '1' && *str <= '4')
		{
			if (i >= SIZE * 4)
				return 0;
			clues[i++] = *str - '0';
		}
		else if (*str != ' ')
			return 0;
		str++;
	}
	return (i == SIZE * 4);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		print_error();

	int clues[SIZE * 4];
	int grid[SIZE][SIZE] = {{0}};

	// Analisa as dicas da entrada
	if (!parse_clues(argv[1], clues))
		print_error();

	// Tenta resolver o puzzle
	if (solve(grid, 0, 0, clues))
		print_solution(grid);
	else
		print_error();

	return 0;
}
