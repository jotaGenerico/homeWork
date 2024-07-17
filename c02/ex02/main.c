#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char *str = "42 - confia no processo";

	int result = ft_str_is_alpha(str);

	printf("retorno: %d\n", result);

	return 0;
}
