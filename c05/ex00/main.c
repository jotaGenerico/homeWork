#include <unistd.h>

int	ft_iterative_factorial(int nb);
char ft_atoi(int numero);

int main(void){
	int number = 5;
	int result = ft_iterative_factorial(number);

	ft_atoi(result);
	write(1, "\n", 1);

	return 0;
}

char ft_atoi(int numero){
	char numero_texto;

	if (numero >= 10)
		ft_atoi(numero / 10);
	numero_texto = '0' + (numero % 10);
	write(1, &numero_texto, 1);
}
