#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: Converted number or 0 if,
 * there is one or more chars in the string b that is not 0 or 1,
 * if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, p = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++);

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		n += (b[len] - '0') * p;
		p *= 2;
	}
	return (n);
}
