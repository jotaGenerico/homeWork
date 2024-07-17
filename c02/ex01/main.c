#include <stdio.h>
#include <string.h>

#define T 7

// Protótipo da sua função
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char src[] = "42 - confia no processo";
	char dest1[30];
	char dest2[30];
	unsigned int n = T; // Número de caracteres a copiar

	// Teste com a sua função
	ft_strncpy(dest1, src, n);

	// Teste com a função original
	strncpy(dest2, src, n);

	printf("Resultado da sua função (ft_strncpy): %s\n", dest1);
	printf("Resultado da função original (strncpy): %s\n", dest2);

	// Comparar os resultados
	if (strcmp(dest1, dest2) == 0) {
		printf("Os resultados são idênticos.\n");
	} else {
		printf("Os resultados são diferentes.\n");
	}

	return 0;
}
