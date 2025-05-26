int	ft_is_space(char c)
{
	char	*space;

	space = " \n\t\v\f\r";
	while (*space != '\0')
	{
		if (c == *space)
			return (1);
		space++;
	}
	return (0);
}

int	ft_base_check(char *base)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	j = 0;
	while (base[len] != '\0')
	{
		if (ft_is_space(base[len]) || base[len] == '-' || base[len] == '+')
			return (0);
		len++;
	}
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (len);
}

int	ft_find_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str, char *base, int len)
{
	int	result;
	int	temp;

	result = 0;
	temp = 0;
	while (*str != '\0')
	{
		temp = ft_find_base(base, *str++);
		if (temp < 0)
			break ;
		result = result * len + temp;
	}
	return (result);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	num;
	int	sign;
	int	len;

	num = 0;
	sign = 1;
	len = ft_base_check(base);
	while (ft_is_space(*nbr))
		nbr++;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	num = ft_atoi(nbr, base, len);
	return (num * sign);
}