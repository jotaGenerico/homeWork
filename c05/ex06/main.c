#include <stdio.h>

int	ft_is_prime(int nb);

int main()
{
	printf("--- INICIO DOS TESTES DE ft_is_prime ---\n\n");

	// Testes para 0 e 1 (Esperado: 0)
	printf("### Testes de 0 e 1 ###\n");
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", 0, ft_is_prime(0));
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", 1, ft_is_prime(1));

	// Testes para numeros primos conhecidos (Esperado: 1)
	printf("\n### Testes de Primos Conhecidos ###\n");
	printf("Is %d prime? (Esperado: 1) -> Resultado: %d\n", 2, ft_is_prime(2));
	printf("Is %d prime? (Esperado: 1) -> Resultado: %d\n", 3, ft_is_prime(3));
	printf("Is %d prime? (Esperado: 1) -> Resultado: %d\n", 5, ft_is_prime(5));
	printf("Is %d prime? (Esperado: 1) -> Resultado: %d\n", 7, ft_is_prime(7));
	printf("Is %d prime? (Esperado: 1) -> Resultado: %d\n", 11, ft_is_prime(11));
	printf("Is %d prime? (Esperado: 1) -> Resultado: %d\n", 17, ft_is_prime(17));
	printf("Is %d prime? (Esperado: 1) -> Resultado: %d\n", 19, ft_is_prime(19));
	printf("Is %d prime? (Esperado: 1) -> Resultado: %d\n", 97, ft_is_prime(97));
	printf("Is %d prime? (Esperado: 1) -> Resultado: %d\n", 101, ft_is_prime(101));
	printf("Is %d prime? (Esperado: 1) -> Resultado: %d\n", 199, ft_is_prime(199));
	printf("Is %d prime? (Esperado: 1) -> Resultado: %d\n", 2147483647, ft_is_prime(2147483647)); // INT_MAX (Maior primo int)

	// Testes para numeros nao primos conhecidos (Esperado: 0)
	printf("\n### Testes de Nao Primos Conhecidos ###\n");
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", 4, ft_is_prime(4));
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", 6, ft_is_prime(6));
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", 9, ft_is_prime(9));
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", 10, ft_is_prime(10));
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", 15, ft_is_prime(15));
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", 25, ft_is_prime(25));
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", 100, ft_is_prime(100));
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", 9999, ft_is_prime(9999));
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", 2147483646, ft_is_prime(2147483646)); // INT_MAX - 1 (Par)

	// Testes para numeros negativos (Esperado: 0)
	printf("\n### Testes de Numeros Negativos ###\n");
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", -5, ft_is_prime(-5));
	printf("Is %d prime? (Esperado: 0) -> Resultado: %d\n", -10, ft_is_prime(-10));

	printf("\n--- FIM DOS TESTES DE ft_is_prime ---\n");
	return (0);
}
