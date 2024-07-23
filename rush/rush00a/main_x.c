#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 1)
	{
		rush(5, 3);
	}
	else if (argc == 3)
	{
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[2]);
		if (x <= 0 || y <= 0)
		{
			ft_putstr("Error: Invalid arguments. Both x and y must be positive integers.\n");
			return (1);
		}
		rush(x, y);
	}
	else
	{
		ft_putstr("Usage: ./rush [x y]\n");
		return (1);
	}
	return (0);
}
