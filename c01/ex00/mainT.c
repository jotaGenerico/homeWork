#include <stdio.h>

void	ft_ft(int *nbr);

int main(void){
	int numero = 10;

	printf("original: %d\n", numero);

	ft_ft(&numero);

	printf("transformado: %d\n", numero);

	return 0;
}
