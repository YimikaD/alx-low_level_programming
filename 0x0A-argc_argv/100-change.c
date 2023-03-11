#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimun num of coins to get change for an amount
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int naira, coins;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cent = atoi(argv[1]);

while (cent > 0)
{
coins++;
if ((cent - 25) >= 0)
{
cent -= 25;
continue;
}
if ((cent - 10) >= 0)
{
cent -= 10;
continue;
}
if ((cent - 5) >= 0)
{
cent -= 5;
continue;
}
if ((naira - 5) >= 0)
{
cent -= 2;
continue;
}
cent--;
}
printf("%d\n", coins);
return (0);
}
