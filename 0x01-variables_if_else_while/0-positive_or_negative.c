#include <stdlib.h>
#include <time.h>
/**
 * main - Program that prints if the number stored is negative or positive
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		print("%d is zero\n", n);
	} else (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
