#include <stdio.h>

char	*ft_strupcase(char *str);

int main() {
	char string1[] = "HelloWorld";
	char string2[] = "Hello123";
	char string3[] = "+-(*%$_)";

	char *result1 = ft_strupcase(string1);
	char *result2 = ft_strupcase(string2);
	char *result3 = ft_strupcase(string3);

	printf("Result 1: %s\n", result1);
	printf("Result 2: %s\n", result2);
	printf("Result 3: %s\n", result3);

	return 0;
}
