/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:31:20 by jose-cad          #+#    #+#             */
/*   Updated: 2025/06/10 10:31:24 by jose-cad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*original_str;
	int		capitalize;

	original_str = str;
	capitalize = 1;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || \
			(*str >= 'A' && *str <= 'Z') || \
			(*str >= '0' && *str <= '9'))
		{
			if (capitalize && (*str >= 'a' && *str <= 'z'))
				*str -= 32;
			else if (!capitalize && (*str >= 'A' && *str <= 'Z'))
				*str += 32;
			capitalize = 0;
		}
		else
			capitalize = 1;
		str++;
	}
	return (original_str);
}
