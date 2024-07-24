int ft_atoi_base(char *str, char *base) {
	int result = 0;
	int base_len = 0;
	while (base[base_len] != '\0') {
		base_len++;
	}

	int str_len = 0;
	while (str[str_len] != '\0') {
		str_len++;
	}

	int indice = 0;
	while (str[indice] != '\0') {
		int digit = 0;
		int power = 1;
		int base_indice = 0;
		while (base[base_indice] != '\0' && base[base_indice] != str[indice]) {
			base_indice++;
		}
		if (base_indice == base_len) {
			return 0;
		}

		for (int i = str_len - 1; i > indice; i--) {
			power *= base_len;
		}

		digit = base_indice * power;
		result += digit;
		indice++;
	}

	return result;
}
