#include "main.h"
/**
* 8-24_hours.c - Prints every mins of Jack Bauer from 00:00 to 23:59
* Return: 24hr clock 
*/
void jack_bauer(void)
{
int a, b;

for (a = 0; a < 24; a++)
{
for (b = 0; b < 60; b++)
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar(':');
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
_putchar('\n');
}
}
}
