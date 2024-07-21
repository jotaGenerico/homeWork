#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

void	print_error(void);
void	free_2d_array(int **arr);
void	print_solved(int **grid);
void	initialize_gui(int gui[4][4]);
void	initialize_solved(int **solved);
void	initialize_gui(int gui[4][4]);
void	initialize_gui_zeros(int gui[4][4]);
void	initialize_solved(int **solved);
int		**allocate_2d_array(void);
int		parse_input(char *str, int input[4][4]);
int		compare_matrices(int input[4][4], int gui[4][4]);

#endif
