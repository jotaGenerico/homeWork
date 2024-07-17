#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int num1 = 10;
	int num2 = 3;

	printf("Antes da divisão: a = %d, b = %d\n", num1, num2);

	ft_ultimate_div_mod(&num1, &num2);

	printf("Depois da divisão: a = %d, b = %d\n", num1, num2);

	return 0;
}
