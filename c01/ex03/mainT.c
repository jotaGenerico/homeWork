#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a = 84;
	int b = 2;
	int div, mod;

	ft_div_mod(a, b, &div, &mod);

	printf("Resultado da divisão: %d\n", div);
	printf("Resto da divisão: %d\n", mod);

	return 0;
}
