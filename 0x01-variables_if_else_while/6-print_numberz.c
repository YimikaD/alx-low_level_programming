#include <stdio.h>
/**
 * main - Program that prints all sindle digits number of base 10
 * Return: 0 (Success)
 */
int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
		putchar((nums % 10) + '0');
	putchar('\n');
	return (0);
}
