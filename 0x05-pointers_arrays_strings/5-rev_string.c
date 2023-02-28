#include "main.h"
/**
 * rev_string - function that reverse string
 * @s: string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;
	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = (len - index - 1);
		s[len - index - 1] = tmp;
	}
	return (0);
}
