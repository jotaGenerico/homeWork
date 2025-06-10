static int	is_prime_recursive_checker(int nb, int divisor);
static int	find_next_prime_recursive(int nb);
int	ft_is_prime(int nb);

static int	is_prime_recursive_checker(int nb, int divisor)
{
	if (divisor > nb / divisor)
		return (1);
	if (nb % divisor == 0)
		return (0);
	return (is_prime_recursive_checker(nb, divisor + 1));
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	return (is_prime_recursive_checker(nb, 3));
}

static int	find_next_prime_recursive(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (find_next_prime_recursive(nb + 1));
}

int	ft_find_next_prime(int nb)
{
	return (find_next_prime_recursive(nb));
}
