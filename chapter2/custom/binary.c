#include <stdio.h>

void	print_decimal_to_n(int x, int n, char *num)
{
	if (x == 0)
		return ;
	print_decimal_to_n(x / n, n, num);
	printf("%c", num[x % n]);
}

void	print_binary(int x)
{
	if (x == 0)
		printf("0");
	print_decimal_to_n(x, 2, "01");
}

void	print_hex(int x)
{
	printf("0x");
	if (x == 0)
		printf("0");
	print_decimal_to_n(x, 16, "0123456789ABCDEF");
}

int	power(int x, int n)
{
	int xcpy = x;
	if (n == 0)
		return (1);
	for (int i = 1; i < n; i++)
		x *= xcpy;
	return (x);
}

int is_power(int x)
{
	int cnt = 0;
	while (x != 1)
	{
		x /= 2;
		++cnt;
	}
	return (cnt);
}

int	main(void)
{
	int n = 145;
	printf("%d\n", n);
	print_binary(n);
	printf("\n");
	print_hex(n);
	printf("\n");
	return (0);
}
