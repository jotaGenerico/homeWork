char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (0);
}

#include <stdio.h>

char    *ft_strupcase(char *str);

int main() {
    char minha_string[] = "OlA, MundO!";
    char *resultado;

    resultado = ft_strlowcase(minha_string);
    printf("String modificada: %s\n", resultado); // Imprime "OLA, MUNDO!"
    printf("String original: %s\n", minha_string);   // Imprime "OLA, MUNDO!"
    return 0;
}