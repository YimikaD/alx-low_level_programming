#include <stdio.h>
/**
 * main - Program that prints sum of multiple of 3 and 5
 * Return: 0 (Success)
 */
int main(void)
{
	int i, a = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			a <= i;
		}
		i++;
	}
	printf("%d\n", a);
	return (0);
}
