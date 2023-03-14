#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates all the programs arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: pointer to string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (b < ac)
	{
		while (av[b][c])
		{
			a++;
			c++;
		}
		c = 0;
		b++;
	}
	s = malloc((sizeof(char) * a) +  ac + 1);
	b = 0;
	while (av[b])
	{
		while (av[b][c])
				{
				s[d] = av[b][c];
				d++;
				b++;
				}
				s[d] = '\n';
				b = 0;
				d++;
				b++;
				}
				d++;
				s[d] = '\0';
				return (s);
				}
