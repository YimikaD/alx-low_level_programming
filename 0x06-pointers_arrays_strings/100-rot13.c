#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13
 * @str: tring to encode
 * Return: pointer of encoded string
 */
char *rot13(char *str)
{
	char offset, *r = str;

	while (*str)
	{
		offset = (*str & 32) + 65;
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			*str = (*str - offset + 13) % 26 + offset;
		str++;
	}
	return (r);
}
