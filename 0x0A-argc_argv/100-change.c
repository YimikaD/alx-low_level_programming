#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimun num of coins to get change for an amount
 * @argc: argument count
 * @argv: argument vector
 * Return: -1 if the number of argument is not exactly one, 0 if otherwise
 */
int main(int argc, char *argv[])
{
int cents, coins;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);

while (cents > 0)
{
coins++;
if ((cents - 25) >= 0)
{
cents -= 25;
continue;
}
if ((cents - 10) >= 0)
{
cents -= 10;
continue;
}
if ((cents - 5) >= 0)
{
cents -= 5;
continue;
}
if ((cents - 5) >= 0)
{
cents -= 2;
continue;
}
cents--;
}
printf("%d\n", coins);
return (0);
}
