void ft_putstr_non_printable(char *str);

int main() {
	char str[] = "Oi\nvoce esta bem?";
	ft_putstr_non_printable(str); // Saída: Oi\0avoce esta bem?
	return 0;
}
