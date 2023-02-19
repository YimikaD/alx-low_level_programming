#include <stdio.h>
/**
 * main - C program that prints alphabets in lowercase and upper case
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
	putchar('\n');
	return (0);
}
