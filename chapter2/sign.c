#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char	*byte_ptr;

void show_bytes(byte_ptr start, int len)
	{
		for (int i = 0; i < len; i++)
			printf(" %.2x", start[i]);
		printf("\n");
	}

int	main(void)
{
	unsigned	u = 4294967295u;
	int			tu = (int) u;
	printf("u = %u, tu = %d\n", u, tu);
	return (0);
}
