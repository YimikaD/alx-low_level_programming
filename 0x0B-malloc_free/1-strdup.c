#include "main.h"
#include <stdio.h>
#include <string.h>
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
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (ptr[i])
	{
		i++;
	}
	ptr = malloc((sizeof(char) * i) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (n < i)
	{
		ptr[n] == str[n];
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
