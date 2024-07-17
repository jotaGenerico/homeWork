#include <stdio.h>

int	ft_str_is_printable(char *str);

int main() {
	char string1[] = "";
	char string2[] = "Hello123";
	char string3[] = "'\0'\t'\n'";

	int result1 = ft_str_is_printable(string1);
	int result2 = ft_str_is_printable(string2);
	int result3 = ft_str_is_printable(string3);

	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);
	printf("Result 3: %d\n", result3);
	printf("%s", string3);

	return 0;
}
