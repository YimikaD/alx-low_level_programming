#include <stdio.h>
/**
 * main - program that prints all single digits nums starting from 0 of base 10
 * Return: 0 (Success)
 */
int main (void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
		printf("%d", nums);
	printf("\n");
	return (0);
}
