#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int nbr;

	nbr = 9;
	printf("%d eh a raiz quadrada de %d\n",ft_sqrt(nbr), nbr);
	return (0);
}