#include <stdio.h>
/**
 * swap_int - function that swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Retur: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *a
	*a = *b;
	*b = tmp;
}
