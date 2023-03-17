#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: Second string
 * @n: number of bytes to include for @s2
 * Return: newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int 1 = 0, j = 0, k = 0, l = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	ptr = malloc(sizeof(char) * (l + 1));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
			ptr[j] = s1[j];
		if (j >= i)
		{
			ptr[j] = s2[k];
			k++;
		}
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
