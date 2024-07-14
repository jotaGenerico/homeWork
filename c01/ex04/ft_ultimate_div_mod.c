void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b){
	int temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
