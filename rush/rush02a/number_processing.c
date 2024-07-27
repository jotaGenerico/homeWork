#include "rush-02.h"
#include <stdio.h>

unsigned long long count_triples(char *number)
{
    int i = 0;
    int total = 0;
    unsigned long long zeros = 1;
    printf("number = %s\n", number);
    while (number[i])
    {
        i++;
    }
    printf("i = %d\n", i);
    total = i / 3;
    printf("total = %d\n", total);
    printf("zeros = %lld\n", zeros);
    while (total > 1)
    {
        zeros = zeros * 1000;
        total--;
    }
    printf("zeros = %lld\n", zeros);
    return (zeros);
}

void print_number_word(unsigned long long num)
{
	int i = 0;
	while (i < dict_size)
	{
		if (num == ft_atoll(dict[i].number))
		{
			ft_putstr(dict[i].word);
			return;
		}
		i++;
	}
}

void print_triple(int triple, int scale)
{
	int hundreds = triple / 100;
	int tens = (triple % 100) / 10;
	int ones = triple % 10;

	if (hundreds > 0)
	{
		print_number_word(hundreds);
		ft_putstr(" ");
		print_number_word(100);
		if (tens > 0 || ones > 0)
			ft_putstr(" and ");
	}

	if (tens == 1)
	{
		print_number_word(triple % 100);
	}
	else
	{
		if (tens > 0)
		{
			print_number_word(tens * 10);
			if (ones > 0)
				ft_putstr("-");
		}
		if (ones > 0)
			print_number_word(ones);
	}

	if (scale == 0 && triple >= 0)
	{
		ft_putstr(" ");
		print_number_word(scale);
	}
}

void process_large_number(char *number)
{
	unsigned long long num = ft_atoll(number);
	unsigned long long scale = count_triples(number);
	int triple;
	int printed = 0;
    unsigned long long casas = count_triples(number);
    printf("casas = %lld\n", casas);

	while (scale > 0)
	{
		triple = (num / scale) % 1000;
		if (triple > 0)
		{
            if (printed)
            {
				ft_putstr(", ");
            }
            print_triple(triple, scale);
            if (casas > 1)
            {
                ft_putstr(" ");
                print_number_word(casas);
            }
			printed = 1;
            casas /= 1000;
		}
		scale /= 1000;
	}

	if (!printed)
		print_number_word(0);
	ft_putstr("\n");
}

void process_number(char *number)
{
	if (!is_valid_number(number))
	{
        printf("valid number");
		ft_putstr("Error:\n");
		return;
	}

	unsigned long long num = ft_atoll(number);
	if (num < 0 || num > 999999999999999999)
	{
        printf("atoll");
		ft_putstr("Error:\n");
		return;
	}
	process_large_number(number);
}
