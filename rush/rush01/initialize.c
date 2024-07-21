#include "rush01.h"

void	initialize_gui_zeros(int gui[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			gui[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	initialize_gui(int gui[4][4])
{
	initialize_gui_zeros(gui);
	gui[0][0] = 4;
	gui[0][1] = 3;
	gui[0][2] = 2;
	gui[0][3] = 1;
	gui[1][0] = 1;
	gui[1][1] = 2;
	gui[1][2] = 2;
	gui[1][3] = 2;
	gui[2][0] = 4;
	gui[2][1] = 3;
	gui[2][2] = 2;
	gui[2][3] = 1;
	gui[3][0] = 1;
	gui[3][1] = 2;
	gui[3][2] = 2;
	gui[3][3] = 2;
}

void	initialize_solved(int **solved)
{
	solved[0][0] = 1;
	solved[0][1] = 2;
	solved[0][2] = 3;
	solved[0][3] = 4;
	solved[1][0] = 2;
	solved[1][1] = 3;
	solved[1][2] = 4;
	solved[1][3] = 1;
	solved[2][0] = 3;
	solved[2][1] = 4;
	solved[2][2] = 1;
	solved[2][3] = 2;
	solved[3][0] = 4;
	solved[3][1] = 1;
	solved[3][2] = 2;
	solved[3][3] = 3;
}
