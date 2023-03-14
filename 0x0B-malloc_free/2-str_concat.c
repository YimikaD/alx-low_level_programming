#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concantrates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, p = 0, j = 0, q = 0;
char *s;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i])
i++;
while (s2[j])
j++;
p = i + j;
s = malloc((sizeof(char) * p) +1);
if (s == NULL)
return (NULL);
j = 0;
while (q < p)
{
if (q <= i)
s[q] = s1[q];
if (q >= i)
{
s[q] = s2[j];
j++;
}
q++;
}
s[q] = '\0';
return (s);
}
