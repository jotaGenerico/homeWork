#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest1[20] = "abc";
	char	dest2[20] = "abc";
	char	src[20] = "defgh";
	unsigned int	size;
	unsigned int	ft_result;
	unsigned int	std_result;

	// Caso 1: size = 0
	size = 0;
	printf("Caso 1: size = %u\n", size);
	ft_result = ft_strlcat(dest1, src, size);
	std_result = strlcat(dest2, src, size);
	printf("ft_strlcat:  Retorno = %u, Destino = \"%s\"\n", ft_result, dest1);
	printf("strlcat:     Retorno = %u, Destino = \"%s\"\n", std_result, dest2);
    //Reinicializa os dest1 e dest2
    strcpy(dest1, "abc");
    strcpy(dest2, "abc");

	// Caso 2: size = 1
	size = 1;
	printf("\nCaso 2: size = %u\n", size);
	ft_result = ft_strlcat(dest1, src, size);
	std_result = strlcat(dest2, src, size);
	printf("ft_strlcat:  Retorno = %u, Destino = \"%s\"\n", ft_result, dest1);
	printf("strlcat:     Retorno = %u, Destino = \"%s\"\n", std_result, dest2);
    //Reinicializa os dest1 e dest2
    strcpy(dest1, "abc");
    strcpy(dest2, "abc");

	// Caso 3: dest não terminado com nulo
	size = 20;
	dest1[3] = 'x'; // Remove o nulo terminador original
	dest2[3] = 'x';
	printf("\nCaso 3: dest não terminado com nulo, size = %u\n", size);
	ft_result = ft_strlcat(dest1, src, size);
	std_result = strlcat(dest2, src, size);
	printf("ft_strlcat:  Retorno = %u, Destino = \"%s\"\n", ft_result, dest1);
	printf("strlcat:     Retorno = %u, Destino = \"%s\"\n", std_result, dest2);
    //Reinicializa os dest1 e dest2
    strcpy(dest1, "abc");
    strcpy(dest2, "abc");

    // Caso 4: size > strlen(dest) + strlen(src)
    size = 20;
    printf("\nCaso 4: size > strlen(dest) + strlen(src), size = %u\n", size);
    ft_result = ft_strlcat(dest1, src, size);
    std_result = strlcat(dest2, src, size);
    printf("ft_strlcat:  Retorno = %u, Destino = \"%s\"\n", ft_result, dest1);
    printf("strlcat:     Retorno = %u, Destino = \"%s\"\n", std_result, dest2);
    //Reinicializa os dest1 e dest2
    strcpy(dest1, "abc");
    strcpy(dest2, "abc");

    // Caso 5: size == strlen(dest) + strlen(src)
    size = 8; // size == 3 + 5
    printf("\nCaso 5: size == strlen(dest) + strlen(src), size = %u\n", size);
    ft_result = ft_strlcat(dest1, src, size);
    std_result = strlcat(dest2, src, size);
    printf("ft_strlcat:  Retorno = %u, Destino = \"%s\"\n", ft_result, dest1);
    printf("strlcat:     Retorno = %u, Destino = \"%s\"\n", std_result, dest2);
    //Reinicializa os dest1 e dest2
    strcpy(dest1, "abc");
    strcpy(dest2, "abc");

    // Caso 6: size < strlen(dest) + strlen(src)
    size = 5; // size < 3 + 5
    printf("\nCaso 6: size < strlen(dest) + strlen(src), size = %u\n", size);
    ft_result = ft_strlcat(dest1, src, size);
    std_result = strlcat(dest2, src, size);
    printf("ft_strlcat:  Retorno = %u, Destino = \"%s\"\n", ft_result, dest1);
    printf("strlcat:     Retorno = %u, Destino = \"%s\"\n", std_result, dest2);

	return (0);
}
