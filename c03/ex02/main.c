#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

int main() {
    // Caso de teste 1: Strings simples
    char dest1[20] = "Ola";
    char src1[] = " Mundo";
    printf("Teste 1: dest = '%s', src = '%s'\n", dest1, src1);
    printf("Resultado: '%s'\n\n", ft_strcat(dest1, src1)); //Espera-se "Ola Mundo"

    // Caso de teste 2: Destino vazio
    char dest2[20] = "";
    char src2[] = "Teste";
    printf("Teste 2: dest = '%s', src = '%s'\n", dest2, src2);
    printf("Resultado: '%s'\n\n", ft_strcat(dest2, src2)); //Espera-se "Teste"

    // Caso de teste 3: Origem vazia
    char dest3[20] = "Destino";
    char src3[] = "";
    printf("Teste 3: dest = '%s', src = '%s'\n", dest3, src3);
    printf("Resultado: '%s'\n\n", ft_strcat(dest3, src3)); //Espera-se "Destino"

    // Caso de teste 4: Destino sem espaço suficiente (buffer overflow)
    char dest4[10] = "ABC"; //Tamanho 10
    char src4[] = "DEFGH"; // Tamanho 6 (incluindo o nulo)
    printf("Teste 4: dest = '%s', src = '%s'\n", dest4, src4);
    printf("Resultado com buffer overflow: '%s'\n\n", ft_strcat(dest4, src4)); //Comportamento indefinido, possível crash ou corrupção de memória.

    //Caso de teste 5: Testando com caracteres especiais
    char dest5[30] = "Especial";
    char src5[] = " !@#$%^&*()";
    printf("Teste 5: dest = '%s', src = '%s'\n", dest5, src5);
    printf("Resultado: '%s'\n\n", ft_strcat(dest5, src5));

    return 0;
}