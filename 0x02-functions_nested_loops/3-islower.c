#include "main.h"
/**
 * _islower  - Function that check for lowercase character
 * @c - character to be checked
 * Return: 1 if c is in lowercase otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
