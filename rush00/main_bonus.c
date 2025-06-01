#include <unistd.h>

void	ft_putchar(char c);
void	rush00(int x, int y);
void	rush01(int x, int y);

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
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

int	main(int argc, char *argv[])
{
	char	*rush_type;
	int		width;
	int		height;

	if (argc == 4)
	{
		rush_type = argv[1];
		width = ft_atoi(argv[2]);
		height = ft_atoi(argv[3]);
		if (width <= 0 || height <= 0)
		{
			ft_putstr("Width and height must be positive.\n");
			return (1);
		}
		if (ft_strcmp(rush_type, "00") == 0)
			rush00(width, height);
		else if (ft_strcmp(rush_type, "01") == 0)
			rush01(width, height);
		else
		{
			ft_putstr("Unknown rush type. Use '00' or '01'.\n");
			return (1);
		}
	}
	else
	{
		ft_putstr("Usage: ./a.out <rush_type> width height\n");
		ft_putstr("Example: ./a.out 01 5 3\n");
		return (1);
	}
	return (0);
}
