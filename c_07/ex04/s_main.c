#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*nbr = "il";
	char	*base_from = "poneiglyf";
	char	*base_to = "0123456789";

	char	*converted_number = ft_convert_base(nbr, base_from, base_to);

	if (converted_number)
		printf("convertido: %s\n", converted_number);
	else
		printf("erro.\n");
	free(converted_number);
	return (0);
}

