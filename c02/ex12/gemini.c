/* ************************************************************************** */
/* */
/* :::      ::::::::   */
/* gemini.c                                           :+:      :+:    :+:   */
/* +:+ +:+         +:+     */
/* By: jota <jota@student.42sp.org.br>            +#+  +:+       +#+        */
/* +#+#+#+#+#+   +#+           */
/* Created: 2023/09/21 17:35:28 by jota              #+#    #+#             */
/* Updated: 2023/09/21 17:35:31 by jota             ###   ########.fr       */
/* */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_puthex(unsigned char c);
void	ft_put_address(unsigned long addr);
void	ft_print_memory(const void *addr, unsigned int size);

// Função para imprimir um único caractere
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Função para imprimir um byte em hexadecimal
void	ft_puthex(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

// Função para imprimir um endereço de memória
void	ft_put_address(unsigned long addr)
{
	char	hex[16];
	int		i;

	i = 15;
	while (i >= 0)
	{
		hex[i] = "0123456789abcdef"[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, hex, 16);
	ft_putchar(':');
}

// Função para imprimir o conteúdo da memória
void	ft_print_memory(const void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*ptr;

	if (size == 0 || addr == NULL)
		return ;
	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		ft_put_address((unsigned long)&ptr[i]);
		j = 0;
		while (j < 16)
		{
			if (i + j < size)
				ft_puthex(ptr[i + j]);
			else
				write(1, "  ", 2);
			if (j % 2 == 1)
				ft_putchar(' ');
			j++;
		}
		j = 0;
		while (j < 16)
		{
			if (i + j < size)
			{
				if (ptr[i + j] >= 32 && ptr[i + j] <= 126)
					ft_putchar(ptr[i + j]);
				else
					ft_putchar('.');
			}
			j++;
		}
		ft_putchar('\n');
		i += 16;
	}
}