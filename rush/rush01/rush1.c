#include <unistd.h>

#define SIZE 4

void print_error(void)
{
    char *error_msg = "Error\n";
    int error_msg_len = 6;
    int fd = 1; // File descriptor for standard output

    write(fd, error_msg, error_msg_len);
    exit(1);
}

void print_solution(int grid[SIZE][SIZE])
{
    int fd = 1; // File descriptor for standard output

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            char c = grid[i][j] + '0';
            write(fd, &c, 1);
            if (j < SIZE - 1)
                write(fd, " ", 1);
        }
        write(fd, "\n", 1);
    }
}

int check_row(int grid[SIZE][SIZE], int row, int num)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (grid[row][i] == num)
            return 0;
    }
    return 1;
}

int check_col(int grid[SIZE][SIZE], int col, int num)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (grid[i][col] == num)
            return 0;
    }
    return 1;
}

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

int check_views(int grid[SIZE][SIZE], int clues[SIZE * 4])
{
    int line[SIZE];

    // Check top views
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            line[j] = grid[j][i];
        if (!check_view(clues[i], line))
            return 0;
    }

    // Check bottom views
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            line[j] = grid[SIZE - 1 - j][i];
        if (!check_view(clues[SIZE + i], line))
            return 0;
    }

    // Check left views
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            line[j] = grid[i][j];
        if (!check_view(clues[SIZE * 2 + i], line))
            return 0;
    }

    // Check right views
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            line[j] = grid[i][SIZE - 1 - j];
        if (!check_view(clues[SIZE * 3 + i], line))
            return 0;
    }

    return 1;
}

int solve(int grid[SIZE][SIZE], int row, int col, int clues[SIZE * 4])
{
    if (row == SIZE)
        return check_views(grid, clues);

    if (col == SIZE)
        return solve(grid, row + 1, 0, clues);

    int num = 1;
    while (num <= SIZE)
    {
        if (check_row(grid, row, num) && check_col(grid, col, num))
        {
            grid[row][col] = num;
            if (solve(grid, row, col + 1, clues))
                return 1;
            grid[row][col] = 0; // Backtrack
        }
        num++;
    }
    return 0;
}

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

    if (!parse_clues(argv[1], clues))
        print_error();

    if (solve(grid, 0, 0, clues))
        print_solution(grid);
    else
        print_error();

    return 0;
}

