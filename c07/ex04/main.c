#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int main()
{
	char *nbr = "42"; // Número a ser convertido
	char *base_from = "0123456789"; // Base de origem (decimal)
	char *base_to = "01"; // Base de destino (binário)

	char *converted_number = ft_convert_base(nbr, base_from, base_to);

	if (converted_number)
	{
		printf("Número convertido: %s\n", converted_number);
		free(converted_number); // Liberar a memória alocada
	}
	else
	{
		printf("Erro na conversão. Verifique as bases fornecidas.\n");
	}

	return 0;
}
