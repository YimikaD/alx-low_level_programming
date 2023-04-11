#include "main.h"

/**
 *  get_bit - Returns the value of a bit
 *  @index: Index starting from 0 of the bit
 *  @n: The bit
 *  Return: The value of bit @index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 8)
		return (-1);

	if (n & (1lu << index))
		return (1);

	return (0);
}
