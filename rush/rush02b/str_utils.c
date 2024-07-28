#include "rush-02.h"
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(unsigned char*)s1 - *(unsigned char*)s2;
}

int is_valid_number(char *str)
{
	if (*str == '-')
		return 0;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return 0;
		str++;
	}
	return 1;
}

unsigned long long ft_atoll(const char *str)
{
	unsigned long long result = 0;
	int sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;

	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}

	return sign * result;
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return len;
}

void ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}

int ft_max(int a, int b)
{
	return (a > b) ? a : b;
}

int ft_min(int a, int b)
{
	return (a < b) ? a : b;
}
