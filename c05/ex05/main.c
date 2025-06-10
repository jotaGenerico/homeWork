#include <stdio.h>

int	ft_sqrt(int nb);

int main()
{
	printf("--- INICIO DOS TESTES DE ft_sqrt ---\n\n");

	// Testes com nb < 0 (Esperado: 0)
	printf("### Testes com nb < 0 ###\n");
	printf("sqrt(%d) (Esperado: 0)  -> Resultado: %d\n", -1, ft_sqrt(-1));
	printf("sqrt(%d) (Esperado: 0) -> Resultado: %d\n", -100, ft_sqrt(-100));

	// Testes com nb = 0 (Esperado: 0)
	printf("\n### Testes com nb = 0 ###\n");
	printf("sqrt(%d) (Esperado: 0)  -> Resultado: %d\n", 0, ft_sqrt(0));

	// Testes de raizes exatas
	printf("\n### Testes de Raizes Exatas ###\n");
	printf("sqrt(%d) (Esperado: 1)  -> Resultado: %d\n", 1, ft_sqrt(1));
	printf("sqrt(%d) (Esperado: 2)  -> Resultado: %d\n", 4, ft_sqrt(4));
	printf("sqrt(%d) (Esperado: 3)  -> Resultado: %d\n", 9, ft_sqrt(9));
	printf("sqrt(%d) (Esperado: 10) -> Resultado: %d\n", 100, ft_sqrt(100));
	printf("sqrt(%d) (Esperado: 45) -> Resultado: %d\n", 2025, ft_sqrt(2025));
	printf("sqrt(%d) (Esperado: 46340) -> Resultado: %d\n", 2147395600, ft_sqrt(2147395600)); // Maior int perfeito quadrado

	// Testes de numeros sem raiz exata (Esperado: 0)
	printf("\n### Testes de Numeros Sem Raiz Exata ###\n");
	printf("sqrt(%d) (Esperado: 0)  -> Resultado: %d\n", 2, ft_sqrt(2));
	printf("sqrt(%d) (Esperado: 0)  -> Resultado: %d\n", 3, ft_sqrt(3));
	printf("sqrt(%d) (Esperado: 0)  -> Resultado: %d\n", 5, ft_sqrt(5));
	printf("sqrt(%d) (Esperado: 0) -> Resultado: %d\n", 101, ft_sqrt(101));
	printf("sqrt(%d) (Esperado: 0) -> Resultado: %d\n", 2026, ft_sqrt(2026));

	// Testes proximos ao INT_MAX (Esperado: 0, a menos que seja um quadrado perfeito muito grande)
	printf("\n### Testes Proximos ao INT_MAX ###\n");
	printf("sqrt(%d) (Esperado: 0) -> Resultado: %d\n", 2147483646, ft_sqrt(2147483646)); // INT_MAX - 1
	printf("sqrt(%d) (Esperado: 0) -> Resultado: %d\n", 2147483647, ft_sqrt(2147483647)); // INT_MAX

	printf("\n--- FIM DOS TESTES DE ft_sqrt ---\n");
	return (0);
}
