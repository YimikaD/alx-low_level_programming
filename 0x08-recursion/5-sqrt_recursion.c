#include "main.h"
/**
 * _sqrt - returns natural square root of a number
 * @n: number to calculate the number
 * @i: ileterate number
 * Return: square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
