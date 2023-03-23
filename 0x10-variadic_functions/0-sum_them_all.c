#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns sum of all its parameters.
 * @n: Number of parameters
 * @...: Calculates the parameters
 * Return: 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
