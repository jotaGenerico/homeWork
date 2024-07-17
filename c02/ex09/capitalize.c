char *ft_strcapitalize(char *str);
int	ft_strlen(char *str);

char *ft_strcapitalize(char *str){
	int current;


	current = 0;
	while (str[current]){
		if (str[current] == '\0')
			return (1);
		else
			if (str[current]
	}
	len = ft_strlen(str);


}



int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
