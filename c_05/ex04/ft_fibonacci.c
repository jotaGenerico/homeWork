int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    else if (index == 0)
        return (0);
    else if (index == 1 || index == 2)
        return (1);
    else
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

//gemini
int r_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (r_fibonacci(index - 1) + r_fibonacci(index - 2));
}

int i_fibonacci_iterative(int index)
{
	int	a;
	int	b;
	int	i;
	int	temp;

	a = 0;
	b = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	i = 2;
	while (i <= index)
	{
		temp = a + b;
		a = b;
		b = temp;
	}
	return (b);
}
