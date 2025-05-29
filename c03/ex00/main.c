#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main() {
    char *str1 = "Hello";
    char *str2 = "Hello";
    printf("o: %d\n", strcmp(str1, str2));
    printf("m: %d\n", ft_strcmp(str1, str2));

    char *str3 = "42 - confia.";
    char *str4 = "42 - confia no processo!";
    printf("o: %d\n", strcmp(str3, str4));
    printf("m: %d\n", ft_strcmp(str3, str4));

    char *str5 = "";
    char *str6 = "Hello";
    printf("o: %d\n", strcmp(str5, str6));
    printf("m: %d\n", ft_strcmp(str5, str6));

	char *str7 = "Hello";
	char *str8 = "";
	printf("o: %d\n", strcmp(str7, str8));
	printf("m: %d\n", ft_strcmp(str7, str8));

    return 0;
}