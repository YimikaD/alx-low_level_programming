#include "main.h"

/**
 * _islower - Function that checks for lowercase
 * @c: Character to be checked
 * Return: 1 if c is lowercase else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return(0);
}
