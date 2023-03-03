#include "main.h"
/**
 * *leet - function that encodes a string to 1337
 * @str: string to enclosed
 * Return: pointer to enclosed string
 */
char *leet(char *str)
{
	char *r = str;
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char n[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] - 32)
				*str = n[i] + '0';
		}
		str++;
	}
	return (r);
}
