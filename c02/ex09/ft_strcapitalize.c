char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	capitalize_next;
	int	i;


	capitalize_next = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (capitalize_next)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
					capitalize_next = 0;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 1;
		}
		i++;
	}
	return str;
}


char *ft_strcapitalize(char *str)
{
	int capitalize_next = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (capitalize_next)
			{
				if (str[i] >= 'a' && str[i] <= 'z') {
					str[i] -= 32; // Transforma a letra em maiúsculo
				}
				capitalize_next = 0;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z') {
					str[i] += 32; // Transforma a letra em minúsculo
				}
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			capitalize_next = 0; // Não capitaliza dígitos
		}
		else
		{
			capitalize_next = 1; // Define a próxima letra para ser capitalizada
		}

		i++;
	}

	return str;
}
