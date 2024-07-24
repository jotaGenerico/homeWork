#include <unistd.h>

void ft_putnbr_base(int nbr, char *base);

int main(void)
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(42, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(0, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(42, "");  // Base inválida
	ft_putnbr_base(42, "0");  // Base inválida
	ft_putnbr_base(42, "0123456789+");  // Base inválida
	ft_putnbr_base(42, "01234567899");  // Base inválida
	return 0;
}
