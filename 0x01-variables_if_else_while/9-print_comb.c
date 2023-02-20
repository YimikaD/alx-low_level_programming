#include <stdio.h>
/**
 * main - Program prints all combination of single-digits
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 24; n < 34; n++)
	{
		putchar(n);
		if (n != 33)
		{
			putchar(', ');
		}
		putchar('\n');
	}
		return (0);
	}
