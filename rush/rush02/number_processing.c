#include "rush-02.h"

void print_number_word(long long num)
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

	if (scale > 0 && triple > 0)
	{
		ft_putstr(" ");
		print_number_word(scale);
	}
}

void process_large_number(char *number)
{
	long long num = ft_atoll(number);
	int scale = 1000000000;
	int triple;
	int printed = 0;

	while (scale > 0)
	{
		triple = (num / scale) % 1000;
		if (triple > 0)
		{
			if (printed)
				ft_putstr(", ");
			print_triple(triple, scale);
			printed = 1;
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
		ft_putstr("Error: Invalid number\n");
		return;
	}

	long long num = ft_atoll(number);
	if (num < 0 || num > 999999999999)
	{
		ft_putstr("Error: Number out of range\n");
		return;
	}
	process_large_number(number);
}
