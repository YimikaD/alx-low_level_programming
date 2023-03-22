#include "main.h"
#include <stdio.h>
/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: Function to pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
