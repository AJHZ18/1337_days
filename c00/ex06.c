#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_printnbr(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
	else
	{
		ft_putchar(n / 10 + 48);
		ft_putchar(n % 10 + 48);
	}
}
void ft_print_comb2(void)
{
	int a;
	int b;

	a = 0 ;
	while(a <= 98)
	{
		b = a + 1;
		while(b <= 99)
		{
			ft_printnbr(a);
			ft_putchar(' ');
			ft_printnbr(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}	
}

int main(){

	ft_print_comb2();
}
