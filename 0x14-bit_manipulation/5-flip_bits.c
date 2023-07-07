#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need,
 * to flip to get from one number to another.
 * @n: Number of bit.
 * @m: Number of flip needed.
 * Return: The number of bits to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int convert = n ^ m, bit = 0;

	while (convert > 0)
	{
		bit += (convert & 1);
		convert >>= 1;
	}
	return (bit);

