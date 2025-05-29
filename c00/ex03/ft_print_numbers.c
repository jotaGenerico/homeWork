#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	d;

	d = '0';
	while(d <= '9')
	{
		write(1, &d, 1);
		d++;
	}
}