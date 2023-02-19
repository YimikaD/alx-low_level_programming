#include <stdio.h>
/**
 * main - Program that prints digits of number of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int nums;

	char i;

	for (nums = 0; nums < 10; nums++)
		putchar((nums % 10) + '0');
	for (i = 'a'; i <= 'f'; i++);
	putchar(i);

	putchar('\n');
	return (0);
}
