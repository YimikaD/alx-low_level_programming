#include "main.h"
/**
* print_numbers - Function that prints numbers, from 0 to 9
* Return: numbers 0 t0 9 
*/
void print_numbers(void)
{
char c = '0';

while (c <= '9')
{
_putchar(c);
c++;
}
_putchar('\n');
}
