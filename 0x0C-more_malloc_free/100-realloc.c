#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - Reallocates a memory block
 * @ptr: Pointer to previously allocate memory
 * @old_size: Size in bytes of the allocated space for @ptr
 * @new_size: New size in bytes of the new memory block
 * Return: NULL, if new_size == old_size return @ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	char *oldarr = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		arr[i] = oldarr[i];

	free(oldarr);
	return (arr);
}
