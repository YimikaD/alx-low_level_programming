#include "main.h"
/**
 * -isalpha.c - checks for alphabetic character
 *  @c: characterbto be checked
 *  Return: 1 if c is a lower or uppercase letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
