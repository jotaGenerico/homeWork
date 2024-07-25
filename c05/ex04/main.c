#include <stdio.h>

int ft_fibonacci(int index);

int main() {
	int index = 6;

	int fibonacci_result = ft_fibonacci(index);

	if (fibonacci_result == -1) {
		printf("indice invalido.\n");
	} else {
		printf("O %d termo da sequencia eh: %d\n", index, fibonacci_result);
	}

	return 0;
}
