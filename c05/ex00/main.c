#include <stdio.h> // Para usar a funcao printf neste arquivo de teste

// Prototipo da sua funcao ft_iterative_factorial
// Eh essencial que o compilador saiba a assinatura dela para que o main possa chama-la.
int	ft_iterative_factorial(int nb);

int main()
{
	printf("--- INICIO DOS TESTES DE ft_iterative_factorial ---\n\n");

	// --- Testes de Casos Validos (Resultados Conhecidos) ---
	printf("### Casos Validos ###\n");
	printf("Fatorial de 0 (Esperado: 1)  -> Resultado: %d\n", ft_iterative_factorial(0));
	printf("Fatorial de 1 (Esperado: 1)  -> Resultado: %d\n", ft_iterative_factorial(1));
	printf("Fatorial de 2 (Esperado: 2)  -> Resultado: %d\n", ft_iterative_factorial(2));
	printf("Fatorial de 3 (Esperado: 6)  -> Resultado: %d\n", ft_iterative_factorial(3));
	printf("Fatorial de 5 (Esperado: 120) -> Resultado: %d\n", ft_iterative_factorial(5));

	// --- Testes com Numeros na Casa das Dezenas ---
	printf("\n### Numeros na Casa das Dezenas ###\n");
	printf("Fatorial de 10 (Esperado: 3.628.800) -> Resultado: %d\n", ft_iterative_factorial(10));
	printf("Fatorial de 12 (Esperado: 479.001.600) -> Resultado: %d\n", ft_iterative_factorial(12));

	// --- Testes de Casos Invalidos (Potenciais Falhas - Saida Esperada: 0) ---
	printf("\n### Casos Invalidos (nb < 0) ###\n");
	printf("Fatorial de -1 (Esperado: 0) -> Resultado: %d\n", ft_iterative_factorial(-1));
	printf("Fatorial de -7 (Esperado: 0) -> Resultado: %d\n", ft_iterative_factorial(-7));
	printf("Fatorial de -20 (Esperado: 0) -> Resultado: %d\n", ft_iterative_factorial(-20));

	// --- Testes de Overflow (Conforme o Subject, Nao Lidar) ---
	// Estes casos irao exceder o limite de um 'int' (geralmente 2.147.483.647).
	// O resultado sera indefinido (pode ser um numero negativo ou um valor incorreto),
	// mas a funcao nao deve tratar isso, apenas retornar o que "der".
	printf("\n### Testes de Overflow (Retorno Indefinido) ###\n");
	printf("Fatorial de 13 (Maior que INT_MAX, indefinido) -> Resultado: %d\n", ft_iterative_factorial(13)); // 13! = 6.227.020.800
	printf("Fatorial de 15 (Maior que INT_MAX, indefinido) -> Resultado: %d\n", ft_iterative_factorial(15)); // 15! = 1.307.674.368.000
	printf("Fatorial de 20 (Maior que INT_MAX, indefinido) -> Resultado: %d\n", ft_iterative_factorial(20)); // 20! = 2.432.902.008.176.640.000

	printf("\n--- FIM DOS TESTES DE ft_iterative_factorial ---\n");
	return (0);
}

