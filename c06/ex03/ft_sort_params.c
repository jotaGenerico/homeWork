#include <unistd.h>

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_sort_args(int len, char **args);
void	ft_print_arg(int len, char *arg);

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	else
	{
		ft_sort_args(argc, argv);
		i = 1;
		while (i < argc)
		{
			ft_print_arg(ft_strlen(argv[i]), argv[i]);
			i++;
		}
	}
	return (0);
}

void	ft_print_arg(int len, char *arg)
{
	write(1, arg, len);
	write(1, "\n", 1);
}

void	ft_sort_args(int len, char **args)
{
	int		i;
	int		j;
	char	*temp;

	i = 2;
	while (i < len)
	{
		j = i;
		while (j > 1)
		{
			if (ft_strcmp(args[j], args[j - 1]) < 0)
			{
				temp = args[j - 1];
				args[j - 1] = args[j];
				args[j] = temp;
			}
			else
				break ;
			j--;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
