#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main() {
	int number = 0;
	int *ptr1 = &number;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;


	printf("antes: %d\n", number);

	ft_ultimate_ft(ptr9);

	printf("depois: %d\n", number);

	return 0;
}
