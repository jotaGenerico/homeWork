#include <unistd.h>

void printchar(char c) {
	write(1, &c, 1);
}

int main(int argc, char *argv[]) {
	int i = argc - 1;

	while (i > 0) {
		char *arg = argv[i];
		while (*arg != '\0') {
			printchar(*arg);
			arg++;
		}
		printchar('\n');
		i--;
	}

	return 0;
}
