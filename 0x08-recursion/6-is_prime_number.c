#include "main.h"
#include <stdio.h>
/**
 * primeFinder - searches for if a number is prime
 *
 * @a: the number to check
 * @b: the numbers we'll go through
 *
 * Return: Whether or not the number is a prime number
 */

int primeFinder(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primeFinder(a, b + 1);

	return (1);
}

/**
 * is_prime_number - returns 1 if a number is prime
 * @n: the number to check
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (primeFinder(n, 2));

