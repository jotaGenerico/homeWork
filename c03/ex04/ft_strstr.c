char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (str[j] == '\0')
				return (str + (i - j + 1));
			else
				j = 0;
		}
		i++;
	}
	return (0);
}