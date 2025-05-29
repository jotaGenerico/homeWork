#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(void)
{
	// Teste 1: Base binária
	printf("Teste 1 (Binário): %d\n", ft_atoi_base("101010", "01"));

	// Teste 2: Base decimal
	printf("Teste 2 (Decimal): %d\n", ft_atoi_base("42", "0123456789"));

	// Teste 3: Base hexadecimal
	printf("Teste 3 (Hexadecimal): %d\n", ft_atoi_base("2A", "0123456789ABCDEF"));

	// Teste 4: Base octal
	printf("Teste 4 (Octal): %d\n", ft_atoi_base("52", "01234567"));

	// Teste 5: Número negativo
	printf("Teste 5 (Número negativo): %d\n", ft_atoi_base("-42", "0123456789"));

	// Teste 6: Espaços e sinais
	printf("Teste 6 (Espaços e sinais): %d\n", ft_atoi_base("  ++--42", "0123456789"));

	// Teste 7: Base inválida (caractere repetido)
	printf("Teste 7 (Base inválida): %d\n", ft_atoi_base("42", "01234456789"));

	// Teste 8: Base inválida (contém '+')
	printf("Teste 8 (Base inválida): %d\n", ft_atoi_base("42", "0123456789+"));

	// Teste 9: String vazia
	printf("Teste 9 (String vazia): %d\n", ft_atoi_base("", "0123456789"));

	printf("%d\n", ft_atoi_base("2A", "0123456789ABCDEF"));  // Deve imprimir 42
	printf("%d\n", ft_atoi_base("1010", "01"));  // Deve imprimir 10
	printf("%d\n", ft_atoi_base("poney", "poneytglifwz"));  // Deve imprimir 1024464
	printf("%d\n", ft_atoi_base("jat", "jota"));  // Deve imprimir 32
	return (0);
}
