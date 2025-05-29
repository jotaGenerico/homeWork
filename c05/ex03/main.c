#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main() {
	int base = 0;
	int expoente = 0;

	int resultado = ft_recursive_power(base, expoente);

	printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

	return 0;
}
