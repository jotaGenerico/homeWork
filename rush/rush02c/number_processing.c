/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_processing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cda <jose-cda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:11:49 by jose-cda          #+#    #+#             */
/*   Updated: 2024/07/28 21:11:51 by jose-cda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"
#include <stdio.h>

unsigned int str_len(char *number)
{
    int i = 0;
    while (number[i])
    {
        i++;
    }
    return (i);
}

void substring(char *src, char *dest, int init, int end)
{
    int i = init;
    int a = 0; 

    while (i <= end)
    {
        dest[a++] = src[i++];
    }
    dest[a] = '\0';
}

unsigned long long count_triples(char *number)
{
    int total = 0;
    unsigned long long zeros = 1;

    total = (str_len(number) / 3) + (str_len(number) % 3);

    while (total > 1)
    {
        zeros = zeros * 1000;
        total--;
    }

    return (zeros);
}

void print_length_word (unsigned int len)
{
    int i = 0;
	while (i < dict_size)
	{
		if (len == str_len(dict[i].number))
		{
            ft_putstr(" ");
            ft_putstr(dict[i].word);
            ft_putstr(" ");
			return;
		}
		i++;
	}
}

void break_number(char *number)
{
    int sextos;
    char *first;
    char second[19];
    char third[19];

    if (str_len(number) % 18 != 0)
    {
        sextos = (str_len(number) / 18) + 1;
    }
    else
    {
        sextos = str_len(number);
    }
    if (sextos == 2)
    {
        first = number + (str_len(number) - 18);
        substring(number, second, 0, str_len(number) - 18 - 1);
    }
    else if (sextos == 3)
    {
        first = number + (str_len(number) - 18);
        substring(number, second, str_len(number) - 36, (str_len(number) - 18 - 1));
        substring(number, third, 0, str_len(number) - 36 - 1);
    }
    
    else
    {
        first = "";
        second[0] = '\0';
        third[0] = '\0';
    }

    process_large_number(0, third);
    print_length_word(37);
    process_large_number(1, second);
    process_large_number(0, first);

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

void process_large_number(int inc,char *number)
{
	unsigned long long num = ft_atoll(number);
	unsigned long long scale = count_triples(number);
	int triple;
	int printed = 0;
    unsigned long long casas = count_triples(number);
    unsigned int a = 0;
    unsigned long long temp = count_triples(number);

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
                if (inc == 1)
                {
                     if (temp == 1)
                     {
                        a = 0;
                     }
                     else
                     {
                        while (temp != 1)
                        {
                            temp = temp/10;
                            a++;
                        }
                     }
                     a = a + 19;
                     print_length_word(a);
                     a = 0;
                }
                else
                {
                     ft_putstr(" ");
                     print_number_word(casas);
                }
            } 
			if (inc == 0)
            {
                printed = 1;
            }
            casas /= 1000;
		}
		scale /= 1000;
        temp = scale;
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

	if (str_len(number) > 39)
	{
        printf("length");
		ft_putstr("Error:\n");
		return;
	}
    if (str_len(number) > 18)
    {
        break_number(number);
    }
    else
    {
        process_large_number(0, number);
    }
}
