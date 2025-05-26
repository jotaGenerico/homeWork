#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			dest_m[25] = "42 - confi";
	char			dest_o[25] = "42 - confi";
	char			src[] = "a no processo!";
	unsigned int	size = sizeof(dest_m);
	unsigned int	result_m;
	unsigned int	result_o;

	result_m = ft_strlcat(dest_m, src, size);
	result_o = strlcat(dest_o, src, size);

	printf("m: %u\n", result_m);
	printf("m: %s\n", dest_m);

	printf("o: %u\n", result_o);
	printf("o: %s\n", dest_o);

	return (0);
}
