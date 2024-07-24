#include <stdio.h>

// Declare a função ft_atoi_base aqui
int ft_atoi_base(char *str, char *base);

int main(void)
{
	// Teste 1: Base binária
	printf("Teste 1 (Binário): %d\n", ft_atoi_base("1010", "01"));

	// Teste 2: Base decimal
	printf("Teste 2 (Decimal): %d\n", ft_atoi_base("12345", "0123456789"));

	// Teste 3: Base hexadecimal
	printf("Teste 3 (Hexadecimal): %d\n", ft_atoi_base("1A", "0123456789ABCDEF"));

	// Teste 4: Base octal
	printf("Teste 4 (Octal): %d\n", ft_atoi_base("17", "01234567"));

	// Teste 5: Base personalizada
	printf("Teste 5 (Base personalizada): %d\n", ft_atoi_base("hello", "oleh"));

	// Teste 6: Número negativo
	printf("Teste 6 (Número negativo): %d\n", ft_atoi_base("-42", "0123456789"));

	// Teste 7: Espaços e sinais
	printf("Teste 7 (Espaços e sinais): %d\n", ft_atoi_base("  ++--42", "0123456789"));

	// Teste 8: Base inválida (caractere repetido)
	printf("Teste 8 (Base inválida): %d\n", ft_atoi_base("42", "01234456789"));

	// Teste 9: Base inválida (contém '+')
	printf("Teste 9 (Base inválida): %d\n", ft_atoi_base("42", "0123456789+"));

	// Teste 10: String vazia
	printf("Teste 10 (String vazia): %d\n", ft_atoi_base("", "0123456789"));

	return 0;
}
