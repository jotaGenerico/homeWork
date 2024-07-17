#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void) {
	char string1[] = "HelloWorld";
	char string2[] = "Hello123";
	char string3[] = "";

	int result1 = ft_str_is_lowercase(string1);
	int result2 = ft_str_is_lowercase(string2);
	int result3 = ft_str_is_lowercase(string3);

	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);
	printf("Result 3: %d\n", result3);

	return 0;
}
