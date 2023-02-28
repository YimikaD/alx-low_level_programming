#include "main.h"
/**
 * puts2 - prints other characters of a string beginning with first character
 * @str: string character to print
 * Return: @str character
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
