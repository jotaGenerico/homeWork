#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*arg;

	i = argc -1;
	while (i > 0)
	{
		arg = argv[i--];
		while (*arg)
			write(1, arg++, 1);
		write(1, "\n", 1);
	}
	return (0);
}