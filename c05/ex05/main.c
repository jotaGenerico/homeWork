#include <stdio.h>

int ft_sqrt(int nb);

int main(void) {
	int number = 4;
	int square_root = ft_sqrt(number);

	printf("A raiz quadrada de %d é: %d\n", number, square_root);

	return 0;
}
