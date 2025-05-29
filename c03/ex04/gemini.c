#include <stddef.h> // Para definição de NULL

char *ft_strstr(char *str, char *to_find) {
    if (!*to_find)
        return str;

    while (*str) {
        char *s1 = str;
        char *s2 = to_find;

        while (*s1 && *s2 && *s1 == *s2) {
            s1++;
            s2++;
        }

        if (!*s2)
            return str;

        str++;
    }
    return NULL;
}