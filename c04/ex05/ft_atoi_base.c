/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:48:01 by jose-cda          #+#    #+#             */
/*   Updated: 2024/07/24 14:48:06 by jose-cda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_atoi_base(char	*str, char	*base)
{
	int	index;
	int	result;
	int	str_len;
	int	base_len;
	int	digit;
	int	power;
	int	base_index;

	result = 0;
	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	index = 0;
	while (str[index] != '\0')
	{
		digit = 0;
		power = 1;
		base_index = 0;

        while (base[base_index] != '\0' && base[base_index] != str[index]) {
            base_index++;
        }

        if (base_index == base_len) {
            return 0;
        }

        int i = str_len - 1;
        while (i > index) {
            power *= base_len;
            i--;
        }

        digit = base_index * power;
        result += digit;
        index++;
    }

    return result;
}

void ft_putchar(char c) {
    write(1, &c, 1);
}
