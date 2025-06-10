int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	i;
	int	temp;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	a = 0;
	b = 1;
	i = 2;
	while (i <= index)
	{
		temp = a + b;
		a = b;
		b = temp;
		i++;
	}
	return (b);
}
