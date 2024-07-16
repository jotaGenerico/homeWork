#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);

int main() {
	char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	ft_print_memory(str, sizeof(str));
	return 0;
}
