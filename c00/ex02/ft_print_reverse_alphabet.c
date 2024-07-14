#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	letter;
	char	new_line;

	letter = 'z';
	new_line = '\n';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
	write(1, &new_line, 1);
}
