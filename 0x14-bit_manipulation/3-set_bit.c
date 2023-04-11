#include "main.h"

/**
 * set_bit - Sets the value of bit to 1.
 * @index: Index starting from 0 of the bit.
 * @*n: Pointer to given bit.
 * Return: 1 if successful, 0 if it failed.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 88)
		return (-1);

	*n |= (1lu << index);

	return (1);
}
