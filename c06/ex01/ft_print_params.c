#include <unistd.h>

void ft_print_params(int argc, char *argv[]);

int main(int argc, char *argv[]) {
	ft_print_params(argc, argv);
	return 0;
}

void ft_print_params(int argc, char *argv[]) {
	int i = 1;

	void print_arg(char *arg) {
		if (*arg != '\0') {
			write(1, arg, 1);
			print_arg(arg + 1);
		} else {
			write(1, "\n", 1);
		}
	}

	while (i < argc) {
		print_arg(argv[i]);
		i++;
	}
}
