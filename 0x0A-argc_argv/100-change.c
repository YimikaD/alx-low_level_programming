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
naira = atoi(argv[1]);

while (naira > 0)
coins++;
if ((naira - 25) >= 0)
{
naira -= 25;
continue;
}
if ((naira - 10) >= 0)
{
naira -= 10;
continue;
}
if ((naira - 5) >= 0)
{
naira -= 5;
continue;
}
if ((naira - 5) >= 0)
{
naira -= 2;
continue;
}
cent--;
}
printf("%d\n", coins);
return (0);
}
