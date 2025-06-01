/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_forty-two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   solucao criada pelo claude, olhar anexo.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   ainda nao consigo fazer uma soluçao como          #+#    #+#             */
/*   essa, mas como ja disse, ainda...                ###   ########.SP       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_ten_queens_puzzle(void);
void solve(int col, int *queens, int *count);
int is_safe(int col, int *queens);
void print_solution(int *queens);

int ft_ten_queens_puzzle(void)
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

void solve(int col, int *queens, int *count)
{
    int row;

    if (col == 10)
    {
        print_solution(queens);
        (*count)++;
        return;
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

int is_safe(int col, int *queens)
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

void print_solution(int *queens)
{
    int i;
    char c;

    i = 0;
    while (i < 10)
    {
        c = queens[i] + '0';
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
}
