#define _GNU_SOURCE // Para garantir que 'strlcat' original seja declarada

#include <stdio.h>
#include <string.h> // Para strlcat, strcpy
#include <stdlib.h> // Para malloc, free, se precisar, mas não usado aqui

// Protótipo da sua função ft_strlcat
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest1[20]; // Usaremos strcpy para resetar
	char	dest2[20]; // Usaremos strcpy para resetar
	char	src[20] = "defgh"; // strlen = 5
	unsigned int	initial_dest_len; // Para "abc", será 3
	unsigned int	size;
	unsigned int	ft_result;
	unsigned int	std_result;
	int				i; // Usado para o loop de 'size'

	// Calcula o comprimento inicial de dest para o loop
	initial_dest_len = strlen("abc"); // Será 3

	printf("--- Testes com size de 0 a strlen(dest) ---\n");

	// Loop para testar size de 0 até o comprimento inicial de dest (inclusive)
	// Para "abc" (len 3), testará size = 0, 1, 2, 3.
	for (i = 0; i <= (int)initial_dest_len; i++)
	{
		size = (unsigned int)i;
		strcpy(dest1, "abc"); // Reinicializa dest1
		strcpy(dest2, "abc"); // Reinicializa dest2

		printf("\nCaso Loop %d: size = %u\n", i, size);
		ft_result = ft_strlcat(dest1, src, size);
		std_result = strlcat(dest2, src, size);
		printf("ft_strlcat:  Retorno = %u, Destino = \"%s\"\n", ft_result, dest1);
		printf("strlcat:     Retorno = %u, Destino = \"%s\"\n", std_result, dest2);
	}

	printf("\n--- Outros Testes (como estavam) ---\n");

	// Caso 3: dest não terminado com nulo
	strcpy(dest1, "abc"); // Garante que comece com "abc"
	strcpy(dest2, "abc");
	dest1[3] = 'x'; // Remove o nulo terminador original
	dest2[3] = 'x';
	size = 20;
	printf("\nCaso 'Sem Nulo': dest não terminado com nulo, size = %u\n", size);
	ft_result = ft_strlcat(dest1, src, size);
	std_result = strlcat(dest2, src, size);
	printf("ft_strlcat:  Retorno = %u, Destino = \"%s\"\n", ft_result, dest1);
	printf("strlcat:     Retorno = %u, Destino = \"%s\"\n", std_result, dest2);


	// Caso 4: size > strlen(dest) + strlen(src)
	strcpy(dest1, "abc");
	strcpy(dest2, "abc");
	size = 20;
	printf("\nCaso 'Size Grande': size > strlen(dest) + strlen(src), size = %u\n", size);
	ft_result = ft_strlcat(dest1, src, size);
	std_result = strlcat(dest2, src, size);
	printf("ft_strlcat:  Retorno = %u, Destino = \"%s\"\n", ft_result, dest1);
	printf("strlcat:     Retorno = %u, Destino = \"%s\"\n", std_result, dest2);


	// Caso 5: size == strlen(dest) + strlen(src)
	strcpy(dest1, "abc");
	strcpy(dest2, "abc");
	size = 8; // strlen("abc") + strlen("defgh") = 3 + 5 = 8
	printf("\nCaso 'Size Exato': size == strlen(dest) + strlen(src), size = %u\n", size);
	ft_result = ft_strlcat(dest1, src, size);
	std_result = strlcat(dest2, src, size);
	printf("ft_strlcat:  Retorno = %u, Destino = \"%s\"\n", ft_result, dest1);
	printf("strlcat:     Retorno = %u, Destino = \"%s\"\n", std_result, dest2);


	// Caso 6: size < strlen(dest) + strlen(src) (truncamento leve)
	strcpy(dest1, "abc");
	strcpy(dest2, "abc");
	size = 5; // size < 3 + 5
	printf("\nCaso 'Truncamento Leve': size < strlen(dest) + strlen(src), size = %u\n", size);
	ft_result = ft_strlcat(dest1, src, size);
	std_result = strlcat(dest2, src, size);
	printf("ft_strlcat:  Retorno = %u, Destino = \"%s\"\n", ft_result, dest1);
	printf("strlcat:     Retorno = %u, Destino = \"%s\"\n", std_result, dest2);

	return (0);
}
