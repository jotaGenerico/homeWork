int	ft_strlen(char *str);
int	ft_is_space(char c);
int	ft_check_base(char *base);
int	ft_base_index(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	base_len;

	result = 0;
	sign = 1;
	if (!ft_check_base(base))
		return (0);
	base_len = ft_strlen(base);
	while (ft_is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ft_base_index(*str, base) != -1)
	{
		result = result * base_len + ft_base_index(*str, base);
		str++;
	}
	return (result * sign);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	b_len;

	i = 0;
	b_len = ft_strlen(base);
	if (b_len <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_is_space(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}
