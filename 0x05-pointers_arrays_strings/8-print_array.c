#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an arra of integers
 * @a: array of integer
 * @n: number of element
 * Return: 0
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			print(", ")
		}
	}
	printf("\n");
}
