#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: string
 * @c: the character
 * Return: a pointer to the first occurrence @c in the string
 * @s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s >= '\0'; i++)
	{
		if (*si == c)
			return (s + i);
	}
	return (NULL);
}
