#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    // Casos de teste
    struct test_case {
        char *s1;
        char *s2;
        size_t n;
        char *description;
    } tests[] = {
        {"", "", 0, "Ambas strings vazias, n = 0"},
        {"", "", 5, "Ambas strings vazias, n = 5"},
        {"abc", "abc", 3, "Strings iguais, n = 3"},
        {"abc", "abcd", 3, "s1 menor que s2, n = 3"},
        {"abcd", "abc", 3, "s1 maior que s2, n = 3"},
        {"abc", "xyz", 3, "Strings diferentes, n = 3"},
        {"abc", "abc", 5, "Strings iguais, n > comprimento das strings"},
        {"abc", "abcd", 5, "s1 menor que s2, n > comprimento de s1"},
        {"abcd", "abc", 5, "s1 maior que s2, n > comprimento de s2"},
        {"", "abc", 3, "s1 vazia, s2 não vazia"},
        {"abc", "", 3, "s2 vazia, s1 não vazia"},
        {"abcdef", "abc", 3, "s1 maior que s2, n < comprimento de s1"},
        {"abc", "abcdef", 3, "s2 maior que s1, n < comprimento de s2"},
        {"\\0abc", "\\0def", 4, "Strings com \\0 no inicio"},
        {"abc\\0def", "abc\\0ghi", 6, "Strings com \\0 no meio"}

    };

    int num_tests = sizeof(tests) / sizeof(tests[0]);
    int i;
    int ft_result, original_result;

    // Loop através dos casos de teste
    for (i = 0; i < num_tests; i++) {
        // Executa ambas as funções
        ft_result = ft_strncmp(tests[i].s1, tests[i].s2, tests[i].n);
        original_result = strncmp(tests[i].s1, tests[i].s2, tests[i].n);

        // Imprime os resultados
        printf("Teste %d: %s\n", i + 1, tests[i].description);
        printf("  s1: \"%s\", s2: \"%s\", n: %zu\n", tests[i].s1, tests[i].s2, tests[i].n);
        printf("  ft_strncmp: %d, strncmp: %d\n", ft_result, original_result);

        // Verifica se os resultados são diferentes
        if (ft_result != original_result) {
            printf("  \033[31mDIFERENÇA ENCONTRADA!\033[0m\n");
        } else {
            printf("  \033[32mOK\033[0m\n");
        }
        printf("\n");
    }
    return 0;
}
