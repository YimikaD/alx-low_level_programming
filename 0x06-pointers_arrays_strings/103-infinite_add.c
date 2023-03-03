#include "main.h"
#include <stdio.h>
/**
 *  *infinite_add - function that adds two numbers
 *  @n1: first number to be added
 *  @n2: second number to be added
 *  @r: buffer that stores result
 *  @size_r: buffer size
 *  Return: 0 if result can be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, lenS = 0;

	while (*(n1 + len1++))
	{
	while (*(n2 + len2++))
	{
	printf("%d, %d\n", len1, len2);
	}
	}
	return (r);
}
