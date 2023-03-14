#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns apointer to a newly allocated space
 * @str: string to be copied
 * Return: on successs strdup returns duplicated pointer and NULL if otherwise
 */
char *_strdup(char *str)
{
	int n = 0;
	int i = 1;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	p = malloc((sizeof(char) * i) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while (n < i)
	{
		p[n] = str[n];
		n++;
	}
	p[n] = '\0';
	return (p);
}
