#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	number;
	char	new_line;

	number = '0';
	new_line = '\n';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
	write(1, &new_line, 1);
}
