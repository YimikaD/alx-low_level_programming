#include "main.h"

/**
 * int binary_to_uint - Converts binary number to an unsigned int.
 * @b: Pointing to a string of 0 and 1 chars.
 * Return: Number converted or 0 if there is 0ne or more chars in b string
 * that is not 0 or 1, o if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0, l = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		a += (b[len] - '0') * l;
		l *= 2;
	}

	return (a);
}
