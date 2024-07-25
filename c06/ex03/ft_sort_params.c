#include <unistd.h>

void putchar(char c) {
	write(1, &c, 1);
}

int strlen(const char *str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}

int strcmp(const char *s1, const char *s2) {
	while (*s1 && (*s1 == *s2)) {
		s1++;
		s2++;
	}
	return *(unsigned char *)s1 - *(unsigned char *)s2;
}

void print_arg(const char *arg) {
	int i = 0;
	while (arg[i] != '\0') {
		putchar(arg[i]);
		i++;
	}
	putchar('\n');
}

int main(int argc, char *argv[]) {
	if (argc <= 1) {
		return 0;
	}

	int i = 1;
	while (i < argc) {
		int j = i + 1;
		while (j < argc) {
			if (strcmp(argv[i], argv[j]) > 0) {
				char *temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		print_arg(argv[i]);
		i++;
	}

	return 0;
}
