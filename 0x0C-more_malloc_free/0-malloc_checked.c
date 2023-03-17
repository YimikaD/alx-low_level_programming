#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - Allocates memory using malloc
 * @b: number to be allocated
 * Returns: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
