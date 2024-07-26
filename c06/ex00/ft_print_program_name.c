#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*program_name;

	program_name = argv[0];
	if (argc > 0)
	{
		while (*program_name)
		{
			write(1, program_name, 1);
			program_name++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
