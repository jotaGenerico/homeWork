/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_forty-two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drown-ed <drown-ed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 8888/88/88 88:88:88 by drown-ed          #+#    #+#             */
/*   Updated: 8888/88/88 88:88:88 by drown-ed         ###   ########.SP       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			original[] = "42 - confia no processo!";
	char			m_copia[13];
	char			s_copia[13];
	unsigned int	len_m;
	unsigned int	len_s;

	printf("o: %s\n", original);

	len_m = ft_strlcpy(m_copia, original, 12);
	printf("len: %d -> m: %s\n", len_m, m_copia);

	len_s = strlcpy(s_copia, original, 12);
	printf("len: %d -> s: %s\n", len_s, s_copia);
	return (0);
}
