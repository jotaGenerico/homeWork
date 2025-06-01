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

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char original[] = "confia no processo";
	char fcopiada[20];
	char scopiada[20];

	printf("original: %s\n", original);

	ft_strcpy(fcopiada, original);
	printf("ft_strcpy: %s\n", fcopiada);

	strcpy(scopiada, original);
	printf("string.h: %s\n", scopiada);

	return (0);
}
