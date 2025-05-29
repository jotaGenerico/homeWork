#include <stdlib.h>

int		ft_is_space(char c);
int		ft_base_check(char *base);
int		ft_find_base(char *base, char c);
int		ft_atoi(char *str, char *base, int len);
int		ft_atoi_base(char *nbr, char *base);
int		ft_nbr_len(int nbr, int len);
char	*ft_putnbr_base(int num, char *base, char *result, int len);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	int		len;
	char	*result;

	if (ft_base_check(base_from) < 2 || ft_base_check(base_to) < 2)
		return (0);
	num = ft_atoi_base(nbr, base_from);
	len = ft_nbr_len(num, ft_base_check(base_to));
	result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	result = ft_putnbr_base(num, base_to, result, len);
	return (result);
}

int	ft_nbr_len(int nbr, int len)
{
	int	total_digits;

	total_digits = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		total_digits++;
	while (nbr != 0)
	{
		total_digits++;
		nbr /= len;
	}
	return (total_digits);
}

char	*ft_putnbr_base(int num, char *base, char *result, int len)
{
	int	i;
	int	temp;
	int	base_len;

	base_len = ft_base_check(base);
	if (num == 0)
		result[0] = base[0];
	if (num < 0)
		result[0] = '-';
	i = len - 1;
	while (num != 0)
	{
		temp = num % base_len;
		if (temp < 0)
			temp *= -1;
		result[i] = base[temp];
		num /= base_len;
		i--;
	}
	result[len] = '\0';
	return (result);
}