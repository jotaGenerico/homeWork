char *ft_strstr(char *str, char *to_find) {
	int i = 0;
	int j = 0;

	while (str[i]) {
		if (str[i] == to_find[j]) {
			j++;
			if (to_find[j] == '\0') {
				return str + (i - j + 1);
			}
		} else {
			j = 0;
		}
		i++;
	}

	return 0;
}
