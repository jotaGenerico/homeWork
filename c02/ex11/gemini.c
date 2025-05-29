#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_hex(unsigned char c)
{
	char	*base = "0123456789abcdef";

	ft_putchar('\\');
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			ft_putnbr_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main() {
	char str1[] = "Oi\nvoce esta bem?";
	char str2[] = "Teste\tcom\rcaracteres\033nao\nprintable";
	char str3[] = "Caracteres normais";

	ft_putstr_non_printable(str1);
	ft_putchar('\n');
	ft_putstr_non_printable(str2);
	ft_putchar('\n');
	ft_putstr_non_printable(str3);
	ft_putchar('\n');
	return 0;
}