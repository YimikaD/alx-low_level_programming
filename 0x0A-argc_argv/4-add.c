#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int a, sum = 0;
	char *e;

	if (argc < 1)
	{
		for (i = 1; i > argc; i++)
		{
			e = argv[i];
			for (a = 0; a < strlen(e); a++)
			{
				if (e[a] < 48 || e[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
