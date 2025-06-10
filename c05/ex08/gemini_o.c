/* ************************************************************************** */
/* */
/* :::      ::::::::   */
/* ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/* +:+ +:+         +:+     */
/* By: seu_login@student.42.fr                  +#+  +:+       +#+        */
/* and the 42 School community.                                             */
/* ************************************************************************** */

#define N 10 // O tamanho do tabuleiro para 10 rainhas

// Variavel para armazenar o numero total de solucoes.
// Geralmente, variaveis globais nao sao a melhor pratica, mas para este tipo de problema
// e restricoes de nao usar funcoes autorizadas para imprimir ou passar ponteiros complexos,
// ou para manter o prototipo simples, eh uma abordagem comum na 42.
static int g_solutions_count;

// Array para representar o tabuleiro. board[i] armazena a coluna da rainha na linha i.
static int g_board[N];

// Funcao auxiliar para calcular o valor absoluto (abs nao e' autorizado)
static int ft_abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

// Funcao para verificar se colocar uma rainha em (row, col) e' seguro.
// Precisa apenas verificar as linhas anteriores (0 a row-1).
static int is_safe(int row, int col)
{
    int i;

    i = 0;
    while (i < row) // Percorre as linhas ja preenchidas
    {
        // Verifica se ha' conflito na mesma coluna ou na mesma diagonal
        // (coluna ja ocupada ou diagonal atacada)
        if (g_board[i] == col || ft_abs(g_board[i] - col) == ft_abs(i - row))
            return (0); // Conflito encontrado, nao e' seguro
        i++;
    }
    return (1); // Nao ha' conflitos, e' seguro
}

// Funcao recursiva de backtracking para resolver o puzzle
static void solve_queens(int row)
{
    int col;

    // Caso Base: Se todas as rainhas foram colocadas (chegamos na ultima linha + 1)
    if (row == N)
    {
        g_solutions_count++; // Encontramos uma solucao valida, incrementa o contador
        return; // Retorna para explorar outras possibilidades
    }

    // Passo Recursivo: Tenta colocar uma rainha na linha atual (row) em cada coluna
    col = 0;
    while (col < N)
    {
        if (is_safe(row, col)) // Se for seguro colocar a rainha nesta posicao
        {
            g_board[row] = col; // Coloca a rainha (marca a posicao no tabuleiro)
            solve_queens(row + 1); // Chama recursivamente para a proxima linha
            // BACKTRACKING: Nao precisamos "desmarcar" explicitamente a posicao aqui
            // porque na proxima iteracao do loop (para uma nova 'col'),
            // o valor de g_board[row] sera sobrescrito, ou quando a recursao
            // voltar para esta linha, ela ja estara explorando outra 'col'.
            // A mudanca em g_board[row] eh desfeita implicitamente quando
            // a recursao retorna ou quando uma nova coluna e' tentada.
        }
        col++; // Tenta a proxima coluna na linha atual
    }
}

// Funcao principal que inicia a resolucao do puzzle
int ft_ten_queens_puzzle(void)
{
    // Inicializa o contador de solucoes para 0
    g_solutions_count = 0;

    // Inicia o processo de backtracking a partir da primeira linha (linha 0)
    solve_queens(0);

    // Retorna o numero total de solucoes encontradas
    return (g_solutions_count);
}
