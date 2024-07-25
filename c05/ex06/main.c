#include <stdio.h>

int ft_is_prime(int nb);

int main() {
	int numbers[] = {5, 12, 17, 25, 29};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	for (int i = 0; i < size; i++) {
		if (ft_is_prime(numbers[i])) {
			printf("%d é um número primo\n", numbers[i]);
		} else {
			printf("%d não é um número primo\n", numbers[i]);
		}
	}

	return 0;
}
