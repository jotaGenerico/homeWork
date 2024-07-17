#include <unistd.h>

int	ft_str_is_alpha(char *str);

char *ft_strcapitalize(char *str)
{
	int i = 0;
	int capitalize_next = 1;
	int previous_was_special = 0;

	while (str[i])
	{
		if (ft_isalnum(str[i]))
		{
			if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!capitalize_next && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;

			capitalize_next = 0;
			previous_was_special = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			capitalize_next = 0;
			previous_was_special = 0;
		}
		else
		{
			if (!previous_was_special)
				capitalize_next = 1;

			previous_was_special = 1;
		}

		i++;
	}

	return str;
}


int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

