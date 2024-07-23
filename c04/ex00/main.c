#include <stdio.h>

int ft_strlen(char *str);

int main(void){

	char string[] = "hello jota";
	int tamanho = ft_strlen(string);
	printf("%d\n", tamanho);
	return (0);
}
