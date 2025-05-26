#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_totallen(char **strs, int size);
char	*ft_strjoin(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;

	i = 0;
	result = malloc(sizeof(char) * (ft_totallen(strs, size) + ft_strlen(sep) + 1));
	while (i < size)
	{
		if (!result)
			return (NULL);
		result = ft_strcat(result, strs[i]);
		result = ft_strcat(result, sep);
		i++;
	}
	return (result);
}

int		ft_totallen(char **strs, int size)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while ( i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}