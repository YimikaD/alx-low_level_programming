#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies string pointed
 * @dest: return value pointer
 * @src: where to copy string
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '/0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n++] = '/0';
	return (dest);
}
