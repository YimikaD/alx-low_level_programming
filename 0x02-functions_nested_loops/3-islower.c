#include "main.h"
/**
 * Description:_islower - Check for lowercase character
 * @c - character to be checked
 * Return: 1 if c is in lowercase otherwise return 0
 */
int main()
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
