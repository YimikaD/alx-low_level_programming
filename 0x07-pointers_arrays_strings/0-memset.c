#include "main.h"
/**
 * *_memset - function that fills memory with constant byte
 * @s: memory area pointed to
 * @n: number of byte
 * @b: cionstant byte
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
