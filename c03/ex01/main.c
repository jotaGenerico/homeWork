#include <stdio.h>

#define T 5
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void){
	char *s1 = "Hello";
	char *s2 = "Hello";
	unsigned int n = T;
	int result = ft_strncmp(s1, s2, n);
	printf("Result: %d\n", result);

	s1 = "Hello";
	s2 = "World";
	n = 3;
	result = ft_strncmp(s1, s2, n);
	printf("Result: %d\n", result);

	s1 = "World";
	s2 = "Hello";
	n = 2;
	result = ft_strncmp(s1, s2, n);
	printf("Result: %d\n", result);

	return 0;
}
