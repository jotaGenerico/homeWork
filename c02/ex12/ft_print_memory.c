/* ************************************************************************** */
/*                                                                            */
/*   codigo criado por prompts                            :::      ::::::::   */
/*   ainda totalmente fora da minha realidade           :+:      :+:    :+:   */
/*   nao tenho a menor ideia de como realizar         +:+ +:+         +:+     */
/*   uso de operadores nunca vistos somado          +#+  +:+       +#+        */
/*   a diversas restricoes impostas               +#+#+#+#+#+   +#+           */
/*   pela norminette.                                  #+#    #+#             */
/*   mas serei    by drown-ed                         ###   ########.SP       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_print_memory(void *addr, unsigned int size) {
	unsigned char *ptr = (unsigned char *)addr; // Converter o endereço para um ponteiro de unsigned char
	unsigned int i = 0;

	while (i < size) {
		// Imprimir o endereço em hexadecimal
		unsigned long long address = (unsigned long long)&ptr[i];
		write(1, "0000000", 7); // Prefixo inicial para a formatação
		for (int j = 7; j >= 0; j--) {
			char hex_digit = (address >> (j * 4)) & 0xF;
			char hex_char = (hex_digit < 10) ? hex_digit + '0' : hex_digit - 10 + 'a';
			write(1, &hex_char, 1); // Imprimir cada dígito hexadecimal
		}
		write(1, ": ", 2); // Separador entre o endereço e o conteúdo

		// Imprimir o conteúdo em hexadecimal
		for (int j = 0; j < 16; j++) {
			if (i + j < size) {
				char hex_digit = (ptr[i + j] >> 4) & 0xF;
				char hex_char = (hex_digit < 10) ? hex_digit + '0' : hex_digit - 10 + 'a';
				write(1, &hex_char, 1); // Imprimir o dígito hexadecimal mais significativo

				hex_digit = ptr[i + j] & 0xF;
				hex_char = (hex_digit < 10) ? hex_digit + '0' : hex_digit - 10 + 'a';
				write(1, &hex_char, 1); // Imprimir o dígito hexadecimal menos significativo
			} else {
				write(1, "  ", 2); // Espaço em branco para completar a linha
			}
			if (j % 2 == 1) {
				write(1, " ", 1); // Espaço em branco separando os dígitos hexadecimais
			}
		}

		// Imprimir o conteúdo em caracteres imprimíveis
		write(1, " ", 1); // Espaço em branco separando o conteúdo em hexadecimal dos caracteres imprimíveis
		for (int j = 0; j < 16; j++) {
			if (i + j < size) {
				char current_char = ptr[i + j];
				if (current_char < 32 || current_char > 126) {
					write(1, ".", 1); // Substituir caracteres não imprimíveis por um ponto
				} else {
					write(1, &current_char, 1); // Imprimir o caractere imprimível
				}
			}
		}

		write(1, "\n", 1); // Nova linha após cada linha de memória

		i += 16; // Avançar para a próxima linha
	}

	return addr;
}
