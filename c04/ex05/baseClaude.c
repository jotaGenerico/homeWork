int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int is_space(char c)
{
    return (c == ' ' || c == '\f' || c == '\n' ||
            c == '\r' || c == '\t' || c == '\v');
}

int get_index(char c, char *base)
{
    int i = 0;
    while (base[i])
    {
        if (base[i] == c)
            return i;
        i++;
    }
    return -1;
}

int check_base(char *base)
{
    int i = 0;
    int j;

    if (ft_strlen(base) <= 1)
        return 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
            return 0;
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

int ft_atoi_base(char *str, char *base)
{
    int result = 0;
    int sign = 1;
    int base_len;

    if (!check_base(base))
        return 0;
    base_len = ft_strlen(base);
    while (is_space(*str))
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (*str)
    {
        int digit = get_index(*str, base);
        if (digit == -1)
            break;
        result = result * base_len + digit;
        str++;
    }
    return result * sign;
}
