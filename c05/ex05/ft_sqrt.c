static int	recursive_sqrt_finder(int nb, long long candidate)
{
	if (candidate * candidate == nb)
		return ((int)candidate);
	if (candidate * candidate > nb || candidate > 46341)
		return (0);
	return (recursive_sqrt_finder(nb, candidate + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	return (recursive_sqrt_finder(nb, 1));
}
