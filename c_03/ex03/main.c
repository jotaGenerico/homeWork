#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	str_m[25] = "42 - confi";
	char	str_o[25] = "42 - confi";

	char	str[] = "a no processo!";

	ft_strncat(str_m, str, 13);
	strncat(str_o, str, 13);

	printf("m: %s\n", str_m);
	printf("o: %s\n", str_o);

	return (0);
}
