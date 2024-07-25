#include <stdio.h>

int ft_recursive_power(int nb, int power);;

int main() {
	int base = 2;
	int expoente = 3;

	int resultado = ft_recursive_power(base, expoente);

	printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

	return 0;
}

