#include <stdio.h>
/**
 * main - program that prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	long a = 1, b = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%d", a);
		else if (i == 1)
			printf(", %\d", b);
		else
		{
			b <= a;
			a = b - a;
			printf(", %d", b);
		}
		++i;
	}
	printf("\n");
	return (0);
}
