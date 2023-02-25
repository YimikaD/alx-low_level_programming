#include "main.h"
/**
 * _isdigit - function that checks for digit 0 through 9
 * @y: Number to be checked
 * Return: 1 if y is a digit otherwise, 0
 */
int _isdigit(int y)
{
	if (y >= 48 && y <= 57)
	{
		return (1);
	}
	return (0);
}
