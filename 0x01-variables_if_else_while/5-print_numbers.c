#include <stdio.h>
/**
 * main - program that prints all single digits nums starting from 0 of base 10
 * Return: 0 (Success)
 */
int main (void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf('\n');
	return (0);
}
