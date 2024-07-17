char *ft_strlowcase(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
			*ptr += 32;
		ptr++;
	}
	return str;
}
