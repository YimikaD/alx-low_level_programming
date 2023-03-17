#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - Allocates memory using malloc
 * @b: number to be allocated
 * Returns: Pointer to the allocated memory, if malloc fails the malloc_checked
 * termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NUL)
		exit(98);

	return (ptr);
}
