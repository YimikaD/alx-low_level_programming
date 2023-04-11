#include "main.h"

/**
 * get_endianness - Checks  the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int a = 1;
	char *e = (char *)&a;

	if (*e == 1)
		return (1);
	return (0);
}
