#include <stdio.h>

int	ft_atoi(char *str);

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("Faltam parâmetros. Exemplo de uso: ./a.out \"  ---+--+ 1234ab567\"\n");
		return 1;
	}

	char *str = argv[1];
	int num = ft_atoi(str);
	printf("%d\n", num);

	return 0;
}