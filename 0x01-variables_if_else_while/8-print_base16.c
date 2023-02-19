#include <stdio.h>
/**
 * main - Program that prints digits of number of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int nums;

	char ia;

	for (nums = 0; nums < 10; nums++)
		putchar((nums % 10) + '0');

	for (ia = 'a'; ia <= 'f'; ia++);
	putchar(ia);

	putchar('\n');
	return (0);
}
