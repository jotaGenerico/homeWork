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

#include <stdlib.h>

int		ft_is_separator(char c, char *charset);
int		ft_count_words(char *str, char *charset);
char	*ft_get_word(char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		word_count;
	int		i;

	word_count = ft_count_words(str, charset);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		if (*str)
		{
			result[i] = ft_get_word(str, charset);
			if (!result[i])
				return (NULL);
			i++;
			while (*str && !ft_is_separator(*str, charset))
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}

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

char	*ft_get_word(char *str, char *charset)
{
	char	*word;
	int		len;

	len = 0;
	while (str[len] && !ft_is_separator(str[len], charset))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	len = 0;
	while (str[len] && !ft_is_separator(str[len], charset))
	{
		word[len] = str[len];
		len++;
	}
	word[len] = '\0';
	return (word);
}
