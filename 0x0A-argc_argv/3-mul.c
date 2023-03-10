#include "main.h"
#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @agrc: argument count
 * @agrv: argument vector
 * Return: 0 (Success)
 */
int main(int agrc, char *agrv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
