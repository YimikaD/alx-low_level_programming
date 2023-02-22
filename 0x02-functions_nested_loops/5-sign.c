#include "main.h"
/**
 * print-sign - Function that prints sign of a number
 * @n: number 
 * Return: 1 and print + if n > 0, 0 if n = 0, -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('25');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('27');
		return(-1);
	}
	else
	{
		_putchar('30');
		return (0);
	}
}
