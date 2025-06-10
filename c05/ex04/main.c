#include <stdio.h>

int	ft_fibonacci(int index);

int main()
{
	printf("--- INICIO DOS TESTES DE ft_fibonacci ---\n\n");

	// Testes para index < 0 (Esperado: -1)
	printf("### Testes com index < 0 ###\n");
	printf("F(%d) (Esperado: -1) -> Resultado: %d\n", -5, ft_fibonacci(-5));
	printf("F(%d) (Esperado: -1) -> Resultado: %d\n", -1, ft_fibonacci(-1));

	// Testes para casos base (Esperado: F(0)=0, F(1)=1)
	printf("\n### Testes de Casos Base ###\n");
	printf("F(%d) (Esperado: 0)  -> Resultado: %d\n", 0, ft_fibonacci(0));
	printf("F(%d) (Esperado: 1)  -> Resultado: %d\n", 1, ft_fibonacci(1));

	// Testes de sequencia (Esperado: F(2)=1, F(3)=2, F(4)=3, F(5)=5)
	printf("\n### Testes de Sequencia ###\n");
	printf("F(%d) (Esperado: 1)  -> Resultado: %d\n", 2, ft_fibonacci(2));
	printf("F(%d) (Esperado: 2)  -> Resultado: %d\n", 3, ft_fibonacci(3));
	printf("F(%d) (Esperado: 3)  -> Resultado: %d\n", 4, ft_fibonacci(4));
	printf("F(%d) (Esperado: 5)  -> Resultado: %d\n", 5, ft_fibonacci(5));
	printf("F(%d) (Esperado: 8)  -> Resultado: %d\n", 6, ft_fibonacci(6));
	printf("F(%d) (Esperado: 55) -> Resultado: %d\n", 10, ft_fibonacci(10));
	printf("F(%d) (Esperado: 6765) -> Resultado: %d\n", 20, ft_fibonacci(20));

	// Testes de Overflow (O resultado sera indefinido, pois o int estoura)
	// F(46) ja ultrapassa o limite de um int de 32 bits (2,147,483,647)
	printf("\n### Testes de Overflow (Retorno Indefinido) ###\n");
	printf("F(%d) (Esperado: Overflow/Indefinido) -> Resultado: %d\n", 40, ft_fibonacci(40)); // Ainda deve caber em int
	printf("F(%d) (Esperado: Overflow/Indefinido) -> Resultado: %d\n", 45, ft_fibonacci(45)); // Provavelmente estoura
	printf("F(%d) (Esperado: Overflow/Indefinido) -> Resultado: %d\n", 46, ft_fibonacci(46)); // Certamente estoura

	printf("\n--- FIM DOS TESTES DE ft_fibonacci ---\n");
	return (0);
}
