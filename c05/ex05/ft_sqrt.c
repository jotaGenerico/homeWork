// uma delas deu runtime nao lembro exatamente qual foi mas chutaria a primeira
int	ft_sqrt(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 0;
	while (nb > 0)
	{
		nb -= result * 2 + 1;
		if (nb < 0)
			return (0);
		result++;
	}
	return (result);
}

int ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	if (nb < 0)
		return (0);
	while (sqrt * sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}