#include <unistd.h>
/**
 * _putchar - Writes the char c to stdout
 * Return: 1 (Success) on error -1 is returned
 */
int _putchar(char c)

{
return (write(1, &c, 1));
}
