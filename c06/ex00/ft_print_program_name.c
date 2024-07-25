#include <unistd.h>

void ft_print_program_name(char *program_name);

int	main(int argc, char *argv[]) {
	if (argc > 0) {
		ft_print_program_name(argv[0]);
	}

	return 0;
}

void ft_print_program_name(char *program_name) {
	while (*program_name != '\0') {
		write(1, program_name, 1);
		program_name++;
	}
	write(1, "\n", 1);
}
