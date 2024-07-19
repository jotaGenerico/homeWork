#include <stdio.h>

char *ft_strcapitalize(char *str);
int	ft_str_is_numeric(char c);
int ft_str_is_alpha(char c);

int main() {
	char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("Original: %s\n", str);
	ft_strcapitalize(str);
	printf("Caixa alta: %s\n", str);
	return 0;
}
