#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main()
{
	printf("--- INICIO DOS TESTES DE ft_putnbr_base ---\n\n");

	char *base_dec = "0123456789";
	char *base_bin = "01";
	char *base_hex = "0123456789abcdef";
	char *base_oct = "01234567";
	char *base_custom = "poneyvif";
	char *base_large = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789abcdefghijklmnopqrstuvwxyz";

	printf("--- Testes com Numeros Positivos ---\n");
	printf("Num: 0, Base: Decimal -> Resultado: ");
	ft_putnbr_base(0, base_dec);
	printf("\nEsperado: 0\n\n");

	printf("Num: 42, Base: Decimal -> Resultado: ");
	ft_putnbr_base(42, base_dec);
	printf("\nEsperado: 42\n\n");

	printf("Num: 42, Base: Binaria -> Resultado: ");
	ft_putnbr_base(42, base_bin);
	printf("\nEsperado: 101010\n\n");

	printf("Num: 255, Base: Hexadecimal -> Resultado: ");
	ft_putnbr_base(255, base_hex);
	printf("\nEsperado: ff\n\n");
	
	printf("Num: 255, Base: Octal -> Resultado: ");
	ft_putnbr_base(255, base_oct);
	printf("\nEsperado: 377\n\n");

	printf("Num: 12345, Base: \"poneyvif\" -> Resultado: ");
	ft_putnbr_base(12345, base_custom);
	printf("\nEsperado: eppfo\n\n");


	printf("Num: 2147483647 (INT_MAX), Base: Decimal -> Resultado: ");
	ft_putnbr_base(2147483647, base_dec);
	printf("\nEsperado: 2147483647\n\n");
	
	printf("Num: 2147483647 (INT_MAX), Base: Hexadecimal -> Resultado: ");
	ft_putnbr_base(2147483647, base_hex);
	printf("\nEsperado: 7fffffff\n\n");

	printf("--- Testes com Numeros Negativos (exceto INT_MIN) ---\n");
	printf("Num: -42, Base: Decimal -> Resultado: ");
	ft_putnbr_base(-42, base_dec);
	printf("\nEsperado: -42\n\n");

	printf("Num: -42, Base: Binaria -> Resultado: ");
	ft_putnbr_base(-42, base_bin);
	printf("\nEsperado: -101010\n\n");

	printf("Num: -12345, Base: \"poneyvif\" -> Resultado: ");
	ft_putnbr_base(-12345, base_custom);
	printf("\nEsperado: -eppfo\n\n");

	printf("--- Teste CRITICO: INT_MIN (-2147483648) ---\n");
	printf("Num: -2147483648 (INT_MIN), Base: Decimal -> Resultado: ");
	ft_putnbr_base(-2147483648, base_dec);
	printf("\nEsperado: -2147483648\n\n");

	printf("Num: -2147483648 (INT_MIN), Base: Binaria -> Resultado: ");
	ft_putnbr_base(-2147483648, base_bin);
	printf("\nEsperado: -10000000000000000000000000000000\n\n");

	printf("Num: -2147483648 (INT_MIN), Base: Hexadecimal -> Resultado: ");
	ft_putnbr_base(-2147483648, base_hex);
	printf("\nEsperado: -80000000\n\n");


	printf("--- Testes com Bases Invalidas (NADA DEVE SER IMPRESSO) ---\n");
	printf("Base: \"\" (vazia) -> ");
	ft_putnbr_base(123, "");
	printf(" (Nada deve aparecer aqui)\n\n");

	printf("Base: \"0\" (1 caractere) -> ");
	ft_putnbr_base(123, "0");
	printf(" (Nada deve aparecer aqui)\n\n");

	printf("Base: \"01+\" (contem '+') -> ");
	ft_putnbr_base(123, "01+");
	printf(" (Nada deve aparecer aqui)\n\n");

	printf("Base: \"01-\" (contem '-') -> ");
	ft_putnbr_base(123, "01-");
	printf(" (Nada deve aparecer aqui)\n\n");

	printf("Base: \"00\" (caractere duplicado) -> ");
	ft_putnbr_base(123, "00");
	printf(" (Nada deve aparecer aqui)\n\n");

	printf("Base: \"abcda\" (caractere duplicado) -> ");
	ft_putnbr_base(123, "abcda");
	printf(" (Nada deve aparecer aqui)\n\n");

	printf("Num: 1000000, Base: Base 62 (Large) -> Resultado: ");
	ft_putnbr_base(1000000, base_large);
	printf("\nEsperado: p4k\n\n"); // 1,000,000 em base 62 é 'p4k' (aprox. 62^2 = 3844, 62^3 = 238328)


	printf("\n--- FIM DOS TESTES DE ft_putnbr_base ---\n");

	return 0;
}
