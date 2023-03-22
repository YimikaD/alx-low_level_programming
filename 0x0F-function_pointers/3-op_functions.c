#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - Sums of a and b
  * @a: First integer
  * @b: Second integer
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Subtracts b from a
  * @a: first integer
  * @b: Second integer
  *
  * Return:Difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplies a and b
  * @a: first integer
  * @b: second integer
  *
  * Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - DIvides a by b
  * @a: first integer
  * @b: second integer
  *
  * Return: division of a by b result
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Shows the remiander of a by b division
  * @a: first integer
  * @b: second integer
  *
  * Return: remainder of the two integer when divided
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
