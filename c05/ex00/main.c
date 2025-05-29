#include <stdio.h>

int	ft_iterative_factorial(int nb);
int	g_iterative_factorial(int nb);

int	main(void)
{
	int	nbr;
	int	fatorial;
	int gatorial;

	nbr = 2;
	fatorial = ft_iterative_factorial(nbr);
	printf("fatorial de %d: %d\n", nbr, fatorial);

	gatorial = g_iterative_factorial(nbr);
	printf("fatorial de %d: %d\n", nbr, gatorial);
	return (0);
}
