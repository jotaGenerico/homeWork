#include <stdio.h>

char *ft_strcapitalize(char *str);

int main() {
	char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("Original: %s\n", str);
	ft_strcapitalize(str);
	printf("Capitalized: %s\n", str);
	return 0;
}
