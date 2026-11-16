#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_arr(int n, *arr)
{
	int i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + 48);
		i++;
	}
	if (arr[i] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}


