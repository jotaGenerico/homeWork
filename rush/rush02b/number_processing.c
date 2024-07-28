#include "rush-02.h"

void print_number_word(char *num)
{
	int i;

	i = 0;
	while (i < dict_size)
	{
		if (ft_strcmp(num, dict[i].number) == 0)
		{
			ft_putstr(dict[i].word);
			return;
		}
		i++;
	}
}

int is_all_zero(char *num)
{
	while (*num)
	{
		if (*num != '0')
			return 0;
		num++;
	}
	return 1;
}

void process_triple(char *triple)
{
	if (triple[0] != '0')
	{
		print_number_word(&triple[0]);
		ft_putstr(" hundred");
		if (triple[1] != '0' || triple[2] != '0')
			ft_putchar(' ');
	}
	if (triple[1] != '0' || triple[2] != '0')
		process_double(&triple[1]);
}

void process_double(char *double_digit)
{
	char temp[3];

	if (double_digit[0] == '1')
	{
		print_number_word(double_digit);
	}
	else
	{
		if (double_digit[0] != '0')
		{
			temp[0] = double_digit[0];
			temp[1] = '0';
			temp[2] = '\0';
			print_number_word(temp);
			if (double_digit[1] != '0')
				ft_putchar('-');
		}
		if (double_digit[1] != '0')
			print_number_word(&double_digit[1]);
	}
}

void process_large_number(char *number)
{
	int len;
	int scale_index;
	char triple[4];
	int first = 1;

	len = ft_strlen(number);
	scale_index = (len - 1) / 3;
	while (len > 0)
	{
		ft_strncpy(triple, &number[ft_max(0, len - 3)], ft_min(3, len));
		triple[ft_min(3, len)] = '\0';
		if (!is_all_zero(triple))
		{
			if (!first)
				ft_putchar(' ');
			process_triple(triple);
			print_scale(scale_index);
			first = 0;
		}
		len -= 3;
		scale_index--;
	}
}

void print_scale(int scale_index)
{
	char *scales[] = {"", "thousand", "million", "billion", "trillion", "quadrillion",
		"quintillion", "sextillion", "septillion", "octillion", "nonillion",
		"decillion", "undecillion"};
		if (scale_index > 0)
		{
			ft_putchar(' ');
			ft_putstr(scales[scale_index]);
		}
}

void process_number(char *number)
{
	if (!is_valid_number(number))
	{
		ft_putstr("Error\n");
		return;
	}
	while (*number == '0' && *(number + 1) != '\0')
		number++;
	if (ft_strlen(number) > 39)
	{
		ft_putstr("Error\n");
		return;
	}
	if (is_all_zero(number))
		print_number_word("0");
	else
		process_large_number(number);
	ft_putchar('\n');
}
