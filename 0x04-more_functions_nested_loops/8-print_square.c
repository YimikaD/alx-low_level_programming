#include "main.h"
/**
 * print_square - prints a square
 * @size: number of squares
 * Return: empty
 */
void print_square(int size)
{
        int a, b;

        if (size <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (a = 0; a < size; a++)
                {
                        for (b = ; b < size; b++)
                        {
                                _putchar(35);
                        }
                        else
                        _putchar('\n');
                }
        }
}