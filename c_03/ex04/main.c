#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void) {
	char str1[] = "Testando";
	char to_find1[] = "st";
	char str2[] = "O rato roeu a roupa do rei de Roma";
	char to_find2[] = "ro";
	char str3[] = "Nao vai achar";
	char to_find3[] = "vai nada";
	char str4[] = "Vai achar no fim";
	char to_find4[] = "fim";
	char str5[] = "Logo no inicio vai ser encontrado";
	char to_find5[] = "Logo no inicio";
	char str6[] = "Nao vai procurar nada";
	char to_find6[] = "";
	char str7[] = "";
	char to_find7[] = "Vai procurar em lugar nenhum";
	char str8[] = "";
	char to_find8[] = "";

	printf("1: %s\n", ft_strstr(str1, to_find1));
	printf("2: %s\n", ft_strstr(str2, to_find2));
	printf("3: %s\n", ft_strstr(str3, to_find3));
	printf("4: %s\n", ft_strstr(str4, to_find4));
	printf("5: %s\n", ft_strstr(str5, to_find5));
	printf("6: %s\n", ft_strstr(str6, to_find6));
	printf("7: %s\n", ft_strstr(str7, to_find7));
	printf("8: %s\n", ft_strstr(str8, to_find8));

	printf("\nComparando com a funcao strstr da biblioteca string.h:\n");
	printf("1: %s\n", strstr(str1, to_find1));
	printf("2: %s\n", strstr(str2, to_find2));
	printf("3: %s\n", strstr(str3, to_find3));
	printf("4: %s\n", strstr(str4, to_find4));
	printf("5: %s\n", strstr(str5, to_find5));
	printf("6: %s\n", strstr(str6, to_find6));
	printf("7: %s\n", strstr(str7, to_find7));
	printf("8: %s\n", strstr(str8, to_find8));

	return 0;
}

