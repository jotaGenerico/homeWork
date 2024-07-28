#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

void ft_putstr(char *str) {
	while (*str != '\0') {
		ft_putchar(*str);
		str++;
	}
}

void ft_error() {
	ft_putstr("Error!\n");
}

int ft_strlen(char *str) {
	int len = 0;
	while (str[len] != '\0' && len < 40) {
		len++;
	}
	return len;
}

/*
 * trabelhe essa ideia, va pra 42 e nao perca essa linha esta no caminho certo idiota
 * essa cabeça nao eh soh pra separar orelhas
char *ft_strcpy(char *str) {
	char *dest = str;
	return dest;
}

void ft_strcpy(char *dest, const char *src) {
int i = 0;
while (src[i] != '\0') {
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	}

nao se esqueça referencia valor, pare de mallocar  os frees serao um inferno depois

*/
