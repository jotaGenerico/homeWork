#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main() {
	char *s1 = "Hello";
	char *s2 = "Hello";
	int result = ft_strcmp(s1, s2);
	printf("Result: %d\n", result);

	s1 = "Hello";
	s2 = "World";
	result = ft_strcmp(s1, s2);
	printf("Result: %d\n", result);

	s1 = "World";
	s2 = "Hello";
	result = ft_strcmp(s1, s2);
	printf("Result: %d\n", result);

	return 0;
}
