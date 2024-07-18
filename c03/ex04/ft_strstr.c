char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		char	*start;
		char	*target;

		start = str;
		target = to_find;
		while (*str && *target && *str == *target)
		{
			str++;
			target++;
		}
		if (*target == '\0')
			return (start);
		str = start + 1;
	}
	return (0);
}
