#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc < 1)
		return 0;
	else
	{
		int		i;
		char	*args;

		i = 1;
		args = argv[i];
		while (i < argc)
		{
			while (*args)
			{
				write(1, args, 1);
				args++;
			}
			write(1, "\n", 1);
			args = argv[++i];
		}
	}
	return (0);
}
