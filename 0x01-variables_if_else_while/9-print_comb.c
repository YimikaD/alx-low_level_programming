#include <stdio.h>
/**
 * main - Program prints all combination of single-digits
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 10; n < 20; n++)
	{
		putchar(n);
		if (n != 19)
		{
			putchar(',');
			putchar(',');
		}
		putchar('\n');
		return (0);
	}
}
