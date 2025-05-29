#include <unistd.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	capitalize;

	capitalize = 1;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (capitalize)
			{
				*str -= 32;
				capitalize = 0;
			}
		}
		else if (*str >= '0' && *str <= '9')
			capitalize = 1;
		else
			capitalize = 1;
		str++;
    }
    return (str);
}