#include "variadic_function.h"
/**
 * print_numbers - Prints number
 * @separator: String to be printed between numbers
 * @n: Number of integers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			printf("%d", va_arg(args, int));

			if (i != n - 1 && separator != NULL)
				printf("$d", separator);
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
