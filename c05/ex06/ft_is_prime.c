int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (divisor <= nb / divisor)
	{
		if (nb % divisor == 0)
			return (0);
		divisor += 2;
	}
	return (1);
}


//gemini
int ft_is_prime(int nb)
{
	if (nb <= 1)
	{
		return (0);
	}
	int i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

