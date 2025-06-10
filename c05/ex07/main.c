#include <stdio.h>
#include <limits.h>

int	ft_find_next_prime(int nb);

int main()
{
	printf("--- INICIO DOS TESTES DE ft_find_next_prime ---\n\n");

	printf("### Testes de Numeros Pequenos ###\n");
	printf("Proximo primo de %d (Esperado: 2) -> Resultado: %d\n", 0, ft_find_next_prime(0));
	printf("Proximo primo de %d (Esperado: 2) -> Resultado: %d\n", 1, ft_find_next_prime(1));
	printf("Proximo primo de %d (Esperado: 2) -> Resultado: %d\n", 2, ft_find_next_prime(2));
	printf("Proximo primo de %d (Esperado: 3) -> Resultado: %d\n", 3, ft_find_next_prime(3));
	printf("Proximo primo de %d (Esperado: 5) -> Resultado: %d\n", 4, ft_find_next_prime(4));
	printf("Proximo primo de %d (Esperado: 5) -> Resultado: %d\n", 5, ft_find_next_prime(5));
	printf("Proximo primo de %d (Esperado: 7) -> Resultado: %d\n", 6, ft_find_next_prime(6));

	printf("\n### Testes de Numeros Negativos ###\n");
	printf("Proximo primo de %d (Esperado: 2) -> Resultado: %d\n", -10, ft_find_next_prime(-10));
	printf("Proximo primo de %d (Esperado: 2) -> Resultado: %d\n", -1, ft_find_next_prime(-1));

	printf("\n### Testes com Saltos Maiores ###\n");
	printf("Proximo primo de %d (Esperado: 101) -> Resultado: %d\n", 97, ft_find_next_prime(97));
	printf("Proximo primo de %d (Esperado: 101) -> Resultado: %d\n", 100, ft_find_next_prime(100));
	printf("Proximo primo de %d (Esperado: 101) -> Resultado: %d\n", 101, ft_find_next_prime(101));
	printf("Proximo primo de %d (Esperado: 103) -> Resultado: %d\n", 102, ft_find_next_prime(102));
	printf("Proximo primo de %d (Esperado: 109) -> Resultado: %d\n", 108, ft_find_next_prime(108));

	printf("\n### Testes com Numeros Grandes e Limites ###\n");
	printf("Proximo primo de %d (Esperado: 997) -> Resultado: %d\n", 991, ft_find_next_prime(991));
	printf("Proximo primo de %d (Esperado: 1009) -> Resultado: %d\n", 1000, ft_find_next_prime(1000));
	printf("Proximo primo de %d (Esperado: 65537) -> Resultado: %d\n", 65536, ft_find_next_prime(65536));
	printf("Proximo primo de %d (Esperado: 104743) -> Resultado: %d\n", 104729, ft_find_next_prime(104729));
	printf("Proximo primo de %d (Esperado: 2147483647) -> Resultado: %d\n", 2147483646, ft_find_next_prime(2147483646));
	printf("Proximo primo de %d (Esperado: 2147483647) -> Resultado: %d\n", 2147483647, ft_find_next_prime(2147483647));

	printf("\n--- FIM DOS TESTES DE ft_find_next_prime ---\n");
	return (0);
}
