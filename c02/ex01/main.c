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

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char original[] = "confia no processo";
	char fcopiada[5];
	char scopiada[5];

	printf("original: %s\n", original);

	ft_strncpy(fcopiada, original, 5);
	printf("ft_strncpy: %s\n", fcopiada);

	strncpy(scopiada, original, 5);
	printf("string.h: %s\n", scopiada);

	return (0);
}
