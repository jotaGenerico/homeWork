#include <stdio.h>

int	ft_recursive_factorial(int nb);
int	g_recursive_factorial(int nb);

int	main(void)
{
	int	nbr;
	int	fatorial;
	int	gatorial;

	nbr = 0;
	fatorial = ft_recursive_factorial(nbr);
	printf("fatorial de %d: %d\n", nbr, fatorial);

	gatorial = g_recursive_factorial(nbr);
	printf("fatorial de %d: %d\n", nbr, gatorial);
	return (0);
}