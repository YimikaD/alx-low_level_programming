#include "main.h"
/**
 * print_last_digit - function that prints last digit of a number
 * @n: last digit number result
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		ld = -1 * ld;
	}
	_putchar(ld + '0');
	return (ld);
}
