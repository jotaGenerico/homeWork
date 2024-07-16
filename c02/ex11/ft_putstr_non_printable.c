void ft_putstr_non_printable(char *str) {
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < 32 || str[i] > 126) {
			char first = (unsigned char) str[i] / 16;
			char second = (unsigned char) str[i] % 16;
			char hex[2];
			hex[0] = (first < 10) ? first + '0' : first - 10 + 'a';
			hex[1] = (second < 10) ? second + '0' : second - 10 + 'a';
			write(1, "\\", 1);
			write(1, &hex[0], 1);
			write(1, &hex[1], 1);
		} else {
			write(1, &str[i], 1);
		}
		i++;
	}
}
