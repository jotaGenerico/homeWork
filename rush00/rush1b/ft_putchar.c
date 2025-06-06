#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int	signal;
	int	result;

	signal = 1;
	result = 0;
	while (*str == ' ' || *str == '-' || *str == '+')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (result > (2147483647 - (*str - '0')) / 10)
		{
			if (signal == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * signal);
}
