#include "main.h"
/**
 * is_prime_number - returns 1 if a number is prime
 * @n: the number to check
 * Return: 0 if the number is not prime, and 1 if it is
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - searches for if a number is prime
 *
 * @a: the number to check
 * @b: the numbers we'll go through
 *
 * Return: Whether or not the number is a prime number
 */

int check_prime(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		check_prime(a, b + 1);

	return (1);
}

