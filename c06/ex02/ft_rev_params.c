#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return 0;
	else
	{
		char	*args;
		int		i;

		i = argc - 1;
		args = argv[i];
		while (i > 0)
		{
			while (*args)
			{
				write(1, args, 1);
				args++;
			}
			write(1, "\n", 1);
			args = argv[--i];
		}
	}
	return (0);
}
