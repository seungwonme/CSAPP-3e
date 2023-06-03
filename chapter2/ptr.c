#include <stdio.h>
#include <string.h>

typedef unsigned char	*byte_ptr;

void	show_bytes(byte_ptr start, size_t len)
{
	for (size_t i = 0; i < len; i++)
		printf(" %.2x", start[i]);
	printf("\n");
}

void	show_int(int x)
{
	show_bytes((byte_ptr)&x, sizeof(int));
}

void	show_float(float x)
{
	show_bytes((byte_ptr)&x, sizeof(float));
}

void	show_ptr(void *x)
{
	show_bytes((byte_ptr)&x, sizeof(void *));
}

// ~p46
void	test_show_bytes(int val)
{
	int	ival = val;
	float fval = (float) ival;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_ptr(pval);
}

// 2.10
void	inplace_swap(int *x, int *y) // *x = 0110 1001, *y = 1001 0110
{
	*y = *x ^ *y; // *y = 1111 1111
	printf("Step 1 : x = %d, y = %d\n", *x, *y);
	*x = *x ^ *y; // *x = 0110 1001
	printf("Step 2 : x = %d, y = %d\n", *x, *y);
	*y = *x ^ *y; // *y = 1001 0110
	printf("Step 3 : x = %d, y = %d\n", *x, *y);
}

// 2.11
void	reverse_arr(int a[], int cnt)
{
	int first, last;
	for (first = 0, last = cnt - 1; first < last; first++, last--)
		inplace_swap(&a[first], &a[last]);
}

int	main(void)
{
	// test_show_bytes(12345); p46
	/* 2.5
	int val = 0x12345678;
	byte_ptr ap = (byte_ptr) &val;
	show_bytes(ap, 1);
	show_bytes(ap, 2);
	show_bytes(ap, 3); */
	/* 2.6
	show_int(2607352);
	show_float(3510593.0);
	00000000001001111100100011111000
	01001010000  111110010001111100000
	*/
	/* 2.7
	const char *s = "mnopqr";
	show_bytes((byte_ptr) s, strlen(s)); */
	/* 2.10
	int a = 0x69, b = 0x96;
	inplace_swap(&a, &b); */
	return (0);
}
// 00 00 30 39
// 00000000000000000011000000111001
//           01000110010000001110010000000000
//                    *************
// 46 40 e4 00
