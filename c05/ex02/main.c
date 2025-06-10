#include <stdio.h> // Para usar a funcao printf neste arquivo de teste

// Prototipo da sua funcao ft_iterative_power
int	ft_iterative_power(int nb, int power);

int main()
{
	printf("--- INICIO DOS TESTES DE ft_iterative_power ---\n\n");

	// --- Testes Basicos ---
	printf("### Testes Basicos ###\n");
	printf("2^3 (Esperado: 8)      -> Resultado: %d\n", ft_iterative_power(2, 3));
	printf("5^2 (Esperado: 25)     -> Resultado: %d\n", ft_iterative_power(5, 2));
	printf("10^3 (Esperado: 1000)  -> Resultado: %d\n", ft_iterative_power(10, 3));
	printf("7^4 (Esperado: 2401)   -> Resultado: %d\n", ft_iterative_power(7, 4));

	// --- Testes com power = 0 ---
	printf("\n### Testes com power = 0 ###\n");
	printf("5^0 (Esperado: 1)      -> Resultado: %d\n", ft_iterative_power(5, 0));
	printf("-5^0 (Esperado: 1)     -> Resultado: %d\n", ft_iterative_power(-5, 0));
	printf("0^0 (Esperado: 1)      -> Resultado: %d\n", ft_iterative_power(0, 0)); // Caso especial do subject

	// --- Testes com power < 0 (Deve retornar 0) ---
	printf("\n### Testes com power < 0 ###\n");
	printf("2^-1 (Esperado: 0)     -> Resultado: %d\n", ft_iterative_power(2, -1));
	printf("10^-5 (Esperado: 0)    -> Resultado: %d\n", ft_iterative_power(10, -5));
	printf("0^-1 (Esperado: 0)     -> Resultado: %d\n", ft_iterative_power(0, -1));

	// --- Testes com nb = 0 ---
	printf("\n### Testes com nb = 0 ###\n");
	printf("0^1 (Esperado: 0)      -> Resultado: %d\n", ft_iterative_power(0, 1));
	printf("0^5 (Esperado: 0)      -> Resultado: %d\n", ft_iterative_power(0, 5));

	// --- Testes com nb negativo ---
	printf("\n### Testes com nb negativo ###\n");
	printf("(-2)^3 (Esperado: -8)  -> Resultado: %d\n", ft_iterative_power(-2, 3));
	printf("(-2)^4 (Esperado: 16)  -> Resultado: %d\n", ft_iterative_power(-2, 4));
	printf("(-1)^10 (Esperado: 1) -> Resultado: %d\n", ft_iterative_power(-1, 10));
	printf("(-1)^11 (Esperado: -1) -> Resultado: %d\n", ft_iterative_power(-1, 11));

	// --- Testes de Overflow (Retorno Indefinido) ---
	// O subject diz para nao lidar com overflows, o retorno sera indefinido.
	// Estes numeros vao exceder o limite de um 'int' (geralmente 2,147,483,647 ou -2,147,483,648).
	printf("\n### Testes de Overflow (Retorno Indefinido) ###\n");
	printf("2^30 (Esperado: Overflow/Indefinido) -> Resultado: %d\n", ft_iterative_power(2, 30)); // 2^30 = 1,073,741,824 (cabe)
	printf("2^31 (Esperado: Overflow/Indefinido) -> Resultado: %d\n", ft_iterative_power(2, 31)); // 2^31 = 2,147,483,648 (estoura INT_MAX)
	printf("3^20 (Esperado: Overflow/Indefinido) -> Resultado: %d\n", ft_iterative_power(3, 20)); // 3^20 = 3,486,784,401

	printf("\n--- FIM DOS TESTES DE ft_iterative_power ---\n");
	return (0);
}
