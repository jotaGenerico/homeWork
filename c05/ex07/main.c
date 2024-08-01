#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void) {
	int number = 20; // Número para encontrar o próximo primo
	int next_prime = ft_find_next_prime(number);

	printf("O próximo número primo após %d é: %d\n", number, next_prime);

	return 0;
}
