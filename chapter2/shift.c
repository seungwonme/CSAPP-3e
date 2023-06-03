#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	long long			lval;
	long long			aval;
	unsigned long long	uval;

	lval = 0xFEDCBA98LL << 32;
	aval = 0xFEDCBA98LL >> 36;
	uval = 0xFEDCBA98ULL >> 40;
	printf("%llX\n", lval);
	printf("%llX\n", aval);
	printf("%llX\n", uval);

	int c = 0x66 >> 2;
	printf("0x%X\n", c);
	return (0);
}
