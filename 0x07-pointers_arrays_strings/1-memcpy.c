#include "main.h"
/**
 * *_memcpy - function that copies a memory area
 * @n: number of bytes
 * @src: source of memory to be copied
 * @dest: memory copied destination
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

