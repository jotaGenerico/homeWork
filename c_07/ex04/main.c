#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções (assumindo que os dois arquivos .c serão compilados juntos)
int		ft_is_space(char c);
int		ft_base_check(char *base);
int		ft_find_base(char *base, char c);
int		ft_atoi(char *str, char *base, int len);
int		ft_atoi_base(char *nbr, char *base);
int		ft_nbr_len(int nbr, int len);
char	*ft_putnbr_base(int num, char *base, char *result, int len);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int main() {
    char *nbr;
    char *base_from;
    char *base_to;
    char *result;

    // Teste 1: Decimal para Binário
    nbr = "42";
    base_from = "0123456789";
    base_to = "01";
    result = ft_convert_base(nbr, base_from, base_to);
    printf("Binário de \"%s\": %s\n", nbr, result);
    free(result);

    // Teste 2: Binário para Decimal
    nbr = "101010";
    base_from = "01";
    base_to = "0123456789";
    result = ft_convert_base(nbr, base_from, base_to);
    printf("Decimal de \"%s\": %s\n", nbr, result);
    free(result);

    // Teste 3: Decimal para Hexadecimal
    nbr = "42";
    base_from = "0123456789";
    base_to = "0123456789ABCDEF";
    result = ft_convert_base(nbr, base_from, base_to);
    printf("Hexadecimal de \"%s\": %s\n", nbr, result);
    free(result);

    // Teste 4: Hexadecimal para Decimal
    nbr = "2A";
    base_from = "0123456789ABCDEF";
    base_to = "0123456789";
    result = ft_convert_base(nbr, base_from, base_to);
    printf("Decimal de \"%s\": %s\n", nbr, result);
    free(result);

    // Teste 5: Base Inválida
    nbr = "10";
    base_from = "0";
    base_to = "01";
    result = ft_convert_base(nbr, base_from, base_to);
    printf("Teste com base inválida (from): %s\n", result == NULL ? "NULL" : result);

    nbr = "10";
    base_from = "01";
    base_to = "";
    result = ft_convert_base(nbr, base_from, base_to);
    printf("Teste com base inválida (to): %s\n", result == NULL ? "NULL" : result);

    // Teste 6: Número Negativo
    nbr = "-42";
    base_from = "0123456789";
    base_to = "01";
    result = ft_convert_base(nbr, base_from, base_to);
    printf("Binário de \"%s\": %s\n", nbr, result);
    free(result);

    return 0;
}
