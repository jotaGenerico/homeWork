#include "rush-02.h"

int main(int argc, char **argv)
{
	char *dict_file;
	char *number;

	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		return 1;
	}

	if (argc == 2)
	{
		dict_file = "numbers.dict";
		number = argv[1];
	}
	else // argc == 3
	{
		dict_file = argv[1];
		number = argv[2];
	}

	if (!is_valid_number(number))
	{
		ft_putstr("Error\n");
		return 1;
	}

	read_dict(dict_file);
	process_number(number);
	free_dict();

	return 0;
}
