#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
    int n;
    int result;

    n = 10;
    result = ft_fibonacci(n);
    printf("O termo %d da sequência de Fibonacci é: %d\n", n, result);
    return (0);
}