#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: Character to be printed
 * Return: 1 if successfull, -1 on error and error is set appropraitely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
