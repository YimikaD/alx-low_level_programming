#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: number of bytes to be append to dest
 * Return: a pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
