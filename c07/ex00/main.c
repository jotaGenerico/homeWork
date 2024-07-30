#include <stdio.h>
#include <stdlib.h>
char	*ft_strdup(char *src);

int main(void)
{
	char *original = "May the Force be with you!";
	char *duplicate = ft_strdup(original);

	if (duplicate != NULL)
	{
		printf("Original string: %s\n", original);
		printf("Duplicate string: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Failed to duplicate the string.\n");
	}

	return 0;
}
