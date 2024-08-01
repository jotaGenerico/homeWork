/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cda <jose-cda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:19:36 by jose-cda          #+#    #+#             */
/*   Updated: 2024/07/31 16:49:52 by jose-cda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!ft_is_separator(*str, charset) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (ft_is_separator(*str, charset))
			in_word = 0;
		str++;
	}
	return (count);
}

char	*ft_extract_word(char **str, char *charset)
{
	char	*word;
	int		len;

	len = 0;
	while ((*str)[len] && !ft_is_separator((*str)[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	len = 0;
	while (**str && !ft_is_separator(**str, charset))
		word[len++] = *(*str)++;
	word[len] = '\0';
	while (**str && ft_is_separator(**str, charset))
		(*str)++;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		words;
	int		i;

	words = ft_count_words(str, charset);
	i = 0;
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	while (i < words)
	{
		result[i] = ft_extract_word(&str, charset);
		if (!result[i])
			return (NULL);
		i++;
	}
	result[i] = NULL;
	return (result);
}
