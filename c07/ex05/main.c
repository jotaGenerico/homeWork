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
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	*str = "42,;:-,confia:no;processo!";
	char	*charset = ",;:";

	char	**result = ft_split(str, charset);

	if (result)
	{
		int	i = 0;
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			i++;
		}
	}
	else
		printf("erro.\n");
	free(result);
	return 0;
}
