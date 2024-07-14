#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	number;

	if (n >= 0)
	{
		number = 'P';
		write(1, &number, 1);
	}
	else
	{
		number = 'N';
		write(1, &number, 1);
	}
}
