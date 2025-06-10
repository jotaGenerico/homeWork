int	ft_sqrt(int nb)
{
	long long	sqrt_candidate;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	sqrt_candidate = 1;
	while (sqrt_candidate * sqrt_candidate <= nb)
	{
		if (sqrt_candidate * sqrt_candidate == nb)
			return ((int)sqrt_candidate);
		sqrt_candidate++;
		if (sqrt_candidate > 46341)
			return (0);
	}
	return (0);
}
