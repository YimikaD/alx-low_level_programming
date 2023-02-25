#include "main.h"
#include <stdio.h>
/**
 * print_square - function that checks for uppercase character.
 * @size: the number of squares line
 * Return: 0
 */
void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar('#');
				b++;
			}
		b = 0;
		a++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
