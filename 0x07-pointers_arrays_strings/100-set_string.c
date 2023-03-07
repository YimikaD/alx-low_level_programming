#include "main.h"
/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to change
 * @to: value to change pointer to
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
