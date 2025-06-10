// main.c

#include <stdio.h> // Para printf

// Prototipo da funcao que voce esta testando (ft_atoi_base)
// Este prototipo eh essencial para que o main.c saiba como chamar ft_atoi_base.
int	ft_atoi_base(char *str, char *base);

int main()
{
	printf("--- INICIO DOS TESTES DE ft_atoi_base ---\n\n");

	// Bases validas
	char *base_dec = "0123456789";
	char *base_bin = "01";
	char *base_hex = "0123456789abcdef";
	char *base_oct = "01234567";
	char *base_custom = "0123456789ABCDEF"; // Base 16 para ASCII maiuscula

	printf("--- Testes Basicos ---\n");
	printf("String: \"42\", Base: Decimal -> Resultado: %d\n", ft_atoi_base("42", base_dec));
	printf("Esperado: 42\n\n");

	printf("String: \"0\", Base: Decimal -> Resultado: %d\n", ft_atoi_base("0", base_dec));
	printf("Esperado: 0\n\n");

	printf("String: \"-123\", Base: Decimal -> Resultado: %d\n", ft_atoi_base("-123", base_dec));
	printf("Esperado: -123\n\n");

	printf("String: \"--++-543\", Base: Decimal -> Resultado: %d\n", ft_atoi_base("--++-543", base_dec));
	printf("Esperado: -543\n\n");

	printf("--- Testes com Espacos ---\n");
	printf("String: \"  \\t\\n\\r\\v\\f  42\", Base: Decimal -> Resultado: %d\n", ft_atoi_base("  \t\n\r\v\f  42", base_dec));
	printf("Esperado: 42\n\n");

	printf("String: \"  \\t\\n\\r\\v\\f  --+123\", Base: Decimal -> Resultado: %d\n", ft_atoi_base("  \t\n\r\v\f  --+123", base_dec));
	printf("Esperado: 123\n\n");

	printf("--- Testes com Diferentes Bases ---\n");
	printf("String: \"101010\", Base: Binaria -> Resultado: %d\n", ft_atoi_base("101010", base_bin));
	printf("Esperado: 42\n\n");

	printf("String: \"-101010\", Base: Binaria -> Resultado: %d\n", ft_atoi_base("-101010", base_bin));
	printf("Esperado: -42\n\n");

	printf("String: \"--101010\", Base: Binaria -> Resultado: %d\n", ft_atoi_base("--101010", base_bin));
	printf("Esperado: 42\n\n");

	printf("String: \"2a\", Base: Hexadecimal (0-f) -> Resultado: %d\n", ft_atoi_base("2a", base_hex));
	printf("Esperado: 42\n\n");

	printf("String: \"-2a\", Base: Hexadecimal (0-f) -> Resultado: %d\n", ft_atoi_base("-2a", base_hex));
	printf("Esperado: -42\n\n");

	printf("String: \"AFFE\", Base: Hexadecimal (0-F) -> Resultado: %d\n", ft_atoi_base("AFFE", base_custom));
	printf("Esperado: 45054\n\n");

	printf("String: \"-377\", Base: Octal -> Resultado: %d\n", ft_atoi_base("-377", base_oct));
	printf("Esperado: -255\n\n");

	printf("String: \"poneyvif\", Base: \"poneyvif\" -> Resultado: %d\n", ft_atoi_base("poneyvif", "poneyvif"));
	printf("Esperado: 342391\n\n");

	printf("--- Testes com Caracteres Invalidos na String ---\n");
	printf("String: \"123x45\", Base: Decimal -> Resultado: %d\n", ft_atoi_base("123x45", base_dec));
	printf("Esperado: 123 (para no 'x')\n\n");

	printf("String: \"  -abc-123\", Base: Hexadecimal (0-f) -> Resultado: %d\n", ft_atoi_base("  -abc-123", base_hex));
	printf("Esperado: -2748 (para no '-')\n\n");

	printf("--- Testes com Bases Invalidas (Deve retornar 0) ---\n");
	printf("String: \"123\", Base: \"\" (vazia) -> Resultado: %d\n", ft_atoi_base("123", ""));
	printf("Esperado: 0\n\n");

	printf("String: \"123\", Base: \"0\" (um char) -> Resultado: %d\n", ft_atoi_base("123", "0"));
	printf("Esperado: 0\n\n");

	printf("String: \"123\", Base: \"01+\" (contem '+') -> Resultado: %d\n", ft_atoi_base("123", "01+"));
	printf("Esperado: 0\n\n");

	printf("String: \"123\", Base: \"-01\" (contem '-') -> Resultado: %d\n", ft_atoi_base("123", "-01"));
	printf("Esperado: 0\n\n");

	printf("String: \"123\", Base: \"a a\" (contem espaco) -> Resultado: %d\n", ft_atoi_base("123", "a a"));
	printf("Esperado: 0\n\n");

	printf("String: \"123\", Base: \"00\" (duplicado) -> Resultado: %d\n", ft_atoi_base("123", "00"));
	printf("Esperado: 0\n\n");

	printf("String: \"123\", Base: \"banana\" (duplicado) -> Resultado: %d\n", ft_atoi_base("123", "banana"));
	printf("Esperado: 0\n\n");

	printf("\n--- FIM DOS TESTES DE ft_atoi_base ---\n");

	return (0);
}
