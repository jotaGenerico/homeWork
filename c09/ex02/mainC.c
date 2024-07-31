#include <stdio.h>
#include <stdlib.h>

int	ft_is_separator(char c, char *charset);
int	ft_count_words(char *str, char *charset);
char	*ft_extract_word(char **str, char *charset);
char	**ft_split(char *str, char *charset);

int main(void)
{
    char **result;
    char *str = "Hello, how are you doing today?";
    char *charset = " ,?";

    result = ft_split(str, charset);
    if (!result)
    {
        printf("Memory allocation error\n");
        return 1;
    }

    int i = 0;
    while (result[i])
    {
        printf("Word %d: %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}

