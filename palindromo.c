#include <unistd.h>

// criei essa aqui soh para debugar, melhor q ficar largando o printf
void	ft_print(char *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

// na hora eu usei as mesmas dos exercicios ja feitos, count alguma coisa
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int is_palindrome(char *str)
{
    int inicio = 0;
    int fim = ft_strlen(str) - 1;

    while (inicio < fim)
    {
		if (str[inicio] != str[fim])
			return (0);
        inicio++;
        fim--;
    }
    return (1);
}

int main(int argc, char **argv)
{
    if (argc != 2) // nao lembro exatamente quantos args, mas sei q estava certo
        write(1, "\n", 1);
	else
	{
		if (is_palindrome(argv[1]))
			ft_print(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
