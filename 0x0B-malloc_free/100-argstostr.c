#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates all the programs arguments
 * @ac: argument count
 * @av: argument vector
 * Return: ....
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, b = 0, c = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (b < ac)
	{
		while (av[b][c])
		{
			ch++;
			c++;
		}
		c = 0;
		b++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);
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
