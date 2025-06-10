int	f_is_prime(int nb)
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

int	ft_is_prime(int nb)
{
	int	divisor;
	int	limit;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	divisor = 5;
	limit = nb / divisor;
	while (divisor <= limit)
	{
		if (nb % divisor == 0)
			return (0);
		if (nb % (divisor + 2) == 0)
			return (0);
		divisor += 6;
		limit = nb / divisor;
	}
	return (1);
}
