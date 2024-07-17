#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);

int main()
{
	char str[] = "confia no processo";

	ft_putstr(str);
	write(1, "\n", 1);

	return 0;
}
