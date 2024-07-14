#include <unistd.h>

void	initialize_arrays(int *number_min, int *number_max);
int	ft_next_numbers(int numbers, int n);
void	ft_print_numbers(int numbers);
void	ft_print_combn(int n);

void	ft_print_numbers(int numbers)
{
	char	digit;

	if (numbers >= 10)
	{
		ft_print_numbers(numbers / 10);
	}
	digit = '0' + (numbers % 10);
	write(1, &digit, 1);
}

int	ft_next_numbers(int numbers, int n)
{
	int	i;
	int	j;
	int	results;
	int	digits[9];

	i = 0;
	while (i < n)
	{
		digits[n - 1 - i] = numbers % 10;
		numbers /= 10;
		i++;
	}
	i = n - 1;
	while (i >= 0 && digits[i] >= 9 - (n - 1 - i))
	{
		i--;
	}
	if (i >= 0)
		digits[i]++;
		j = i + 1;
		while (j < n)
		{
			digits[j] = digits[j - 1] + 1;
			j++;
		}
	results = 0;
	i = 0;
	while (i < n)
	{
		results = results * 10 + digits[i];
		i++;
	}
	return (results);
}

void	ft_print_combn(int n)
{
	int	number_min[9];
	int	number_max[9];
	int	current;

	initialize_arrays(number_min, number_max);
	if (n > 0 && n < 10)
		current = number_min[n - 1];
		while (current <= number_max[n - 1])
		{
			ft_print_numbers(current);
			if (current != number_max[n - 1])
				write(1, ", ", 2);
			else
				break;
			current = ft_next_numbers(current, n);
		}
		write(1, "\n", 1);
}

void	initialize_arrays(int *number_min, int *number_max)
{
	number_min[0] = 1;
	number_min[1] = 12;
	number_min[2] = 123;
	number_min[3] = 1234;
	number_min[4] = 12345;
	number_min[5] = 123456;
	number_min[6] = 1234567;
	number_min[7] = 12345678;
	number_min[8] = 123456789;
	number_max[0] = 9;
	number_max[1] = 89;
	number_max[2] = 789;
	number_max[3] = 6789;
	number_max[4] = 56789;
	number_max[5] = 456789;
	number_max[6] = 3456789;
	number_max[7] = 23456789;
	number_max[8] = 123456789;
}

int main(void){

	ft_print_combn(3);
	return 0;
}
