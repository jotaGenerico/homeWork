#include <stdlib.h>

int		ft_strlen(char *src);
char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	dest = malloc(sizeof(char) * (len + 1))
	if (!dest)
		return (NULL);
	else
	{
		while (i < len)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

int		ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}