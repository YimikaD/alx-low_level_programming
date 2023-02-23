#include <stdio.h>
/**
 * main - Program that prints sum of even-value terms
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0
		long a = 1, b = 2, sum = b;

	while (b + a < 4000000)
	{
	b += a;
	if (b % 2 == 0)
		sum += b;
	a = b -a;
	++i;
	}
	printf("%d", sum);
	return (0);
}
