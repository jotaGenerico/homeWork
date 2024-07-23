/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_teste.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 09:38:12 by jose-cda          #+#    #+#             */
/*   Updated: 2024/07/11 16:24:51 by jose-cda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_next_numbers(int numbers, int n);
void	ft_print_numbers(int numbers);
void	ft_print_combn(int n);
void	ft_while_function(int n, int *digits, int i, int j);
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
	int	*digits[9];

	i = 0;
	while (i < n)
	{
		*digits[n - 1 - i] = numbers % 10;
		numbers /= 10;
		i++;
	}
	i = n - 1;
	ft_while_function(n, *digits, i, j);
	results = 0;
	i = 0;
	while (i < n)
	{
		results = results * 10 + *digits[i];
		i++;
	}
	return (results);
}

void	ft_print_combn(int n)
{
	   int number_min[9];
	   int number_max[9];
	   int i = 0;
	   int current;

       	   while (i < 9) {
		   if (i == 0)
		   {
	       		   number_min[i] = 1;
			   number_max[i] = 9;
		   }
		   else if (i == 1)
		   {
			   number_min[i] = 12;
			   number_max[i] = 89;
        } else if (i == 2) {
            number_min[i] = 123;
            number_max[i] = 789;
        } else if (i == 3) {
            number_min[i] = 1234;
            number_max[i] = 6789;
        } else if (i == 4) {
            number_min[i] = 12345;
            number_max[i] = 56789;
        } else if (i == 5) {
            number_min[i] = 123456;
            number_max[i] = 456789;
        } else if (i == 6) {
            number_min[i] = 1234567;
            number_max[i] = 3456789;
        } else if (i == 7) {
            number_min[i] = 12345678;
            number_max[i] = 23456789;
        } else if (i == 8) {
            number_min[i] = 123456789;
            number_max[i] = 123456789;
        }

        i++;
    }
	if (n > 0 && n < 10)
	{
		current = number_min[n - 1];
		while (current <= number_max[n - 1])
		{
			ft_print_numbers(current);
			if (current != number_max[n - 1])
			{
				write(1, ", ", 2);
			}
			else
			{
				break ;
			}
			current = ft_next_numbers(current, n);
		}
		write(1, "\n", 1);
	}
}

void	ft_while_function(int n, int *digits, int i, int j)
{
	while (i >= 0 && digits[i] >= 9 - (n - 1 - i))
        {
                i--;
        }
        if (i >= 0)
        {
                digits[i]++;
                j = i + 1;
                while (j < n)
                {
                        digits[j] = digits[j - 1] + 1;
                        j++;
                }
        }

}

int	main(void)
{
	ft_print_combn(6);
	return 0;
}

