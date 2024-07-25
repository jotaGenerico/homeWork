int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	while (nb >= 0)
	{
		if (nb == 0)
			break;
		nb -= result * 2 + 1;
		result++;
		if (nb < 0)
			result = 0;
		else if (nb == 0)
			break;
	}
	return (result);
}
