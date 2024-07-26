#include <stdio.h>

int ft_is_prime(int nb);

int main() {
	int numbers[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
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
