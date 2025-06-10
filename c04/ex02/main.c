#include <limits.h> // Para INT_MAX e INT_MIN
#include <unistd.h> // Para write

// Protótipo da sua função ft_putnbr
void	ft_putnbr(int nb);

// --- Funções Auxiliares para o Main (não fazem parte do seu subject) ---

// Função auxiliar para imprimir uma string e uma nova linha
void ft_putstr_nl(char *s)
{
    while (*s)
        write(1, s++, 1);
    write(1, "\n", 1);
}

// Define os códigos de cor ANSI para facilitar o uso
#define COLOR_RED     "\033[31m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_BLUE    "\033[34m"
#define COLOR_RESET   "\033[0m"

// Função auxiliar para imprimir um código de cor.
// O len é importante porque write precisa saber quantos bytes escrever.
// O sizeof(COLOR_CODE) - 1 calcula o tamanho da string literal sem o '\0'.
void print_color(char *color_code, unsigned int len)
{
    write(1, color_code, len);
}

// --- Fim das Funções Auxiliares ---

int main(void)
{
    ft_putstr_nl("--- Testando ft_putnbr ---");

    // Caso 1: INT_MIN (Negativo - Vermelho)
    ft_putstr_nl("\nCaso 1: INT_MIN (-2147483648)");
    write(1, "Esperado: -2147483648 -> Recebido: ", 35);
    print_color(COLOR_RED, sizeof(COLOR_RED) - 1);
    ft_putnbr(INT_MIN);
    print_color(COLOR_RESET, sizeof(COLOR_RESET) - 1); // Resetar a cor
    ft_putstr_nl(""); // Nova linha após a saída da função

    // Caso 2: Numero Negativo (-42 - Vermelho)
    ft_putstr_nl("\nCaso 2: Numero Negativo (-42)");
    write(1, "Esperado: -42 -> Recebido: ", 27);
    print_color(COLOR_RED, sizeof(COLOR_RED) - 1);
    ft_putnbr(-42);
    print_color(COLOR_RESET, sizeof(COLOR_RESET) - 1);
    ft_putstr_nl("");

    // Caso 3: Zero (0 - Azul)
    ft_putstr_nl("\nCaso 3: Zero (0)");
    write(1, "Esperado: 0 -> Recebido: ", 25);
    print_color(COLOR_BLUE, sizeof(COLOR_BLUE) - 1);
    ft_putnbr(0);
    print_color(COLOR_RESET, sizeof(COLOR_RESET) - 1);
    ft_putstr_nl("");

    // Caso 4: Numero Positivo (42 - Verde)
    ft_putstr_nl("\nCaso 4: Numero Positivo (42)");
    write(1, "Esperado: 42 -> Recebido: ", 26);
    print_color(COLOR_GREEN, sizeof(COLOR_GREEN) - 1);
    ft_putnbr(42);
    print_color(COLOR_RESET, sizeof(COLOR_RESET) - 1);
    ft_putstr_nl("");

    // Caso 5: INT_MAX (Positivo - Verde)
    ft_putstr_nl("\nCaso 5: INT_MAX (2147483647)");
    write(1, "Esperado: 2147483647 -> Recebido: ", 34);
    print_color(COLOR_GREEN, sizeof(COLOR_GREEN) - 1);
    ft_putnbr(INT_MAX);
    print_color(COLOR_RESET, sizeof(COLOR_RESET) - 1);
    ft_putstr_nl("");

    ft_putstr_nl("\n--- Testes Adicionais ---");

    // Caso 6: Numero de 1 digito (7 - Verde)
    ft_putstr_nl("\nCaso 6: Numero de 1 digito (7)");
    write(1, "Esperado: 7 -> Recebido: ", 25);
    print_color(COLOR_GREEN, sizeof(COLOR_GREEN) - 1);
    ft_putnbr(7);
    print_color(COLOR_RESET, sizeof(COLOR_RESET) - 1);
    ft_putstr_nl("");

    // Caso 7: Numero de 1 digito negativo (-9 - Vermelho)
    ft_putstr_nl("\nCaso 7: Numero de 1 digito negativo (-9)");
    write(1, "Esperado: -9 -> Recebido: ", 26);
    print_color(COLOR_RED, sizeof(COLOR_RED) - 1);
    ft_putnbr(-9);
    print_color(COLOR_RESET, sizeof(COLOR_RESET) - 1);
    ft_putstr_nl("");

    // Caso 8: Numero grande (123456789 - Verde)
    ft_putstr_nl("\nCaso 8: Numero grande (123456789)");
    write(1, "Esperado: 123456789 -> Recebido: ", 33);
    print_color(COLOR_GREEN, sizeof(COLOR_GREEN) - 1);
    ft_putnbr(123456789);
    print_color(COLOR_RESET, sizeof(COLOR_RESET) - 1);
    ft_putstr_nl("");

    return (0);
}
