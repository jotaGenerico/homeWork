int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}

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