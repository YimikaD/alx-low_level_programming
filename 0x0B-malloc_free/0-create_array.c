#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: size of array
 * @c: char to fil the array
 * Return: a pointer to the character or null, if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
