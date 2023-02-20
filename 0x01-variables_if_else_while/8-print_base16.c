#include <stdio.h>
/**
* main - Program that prints digits of number of base 16 in lowercase
* Return: 0 (Success)
*/
int main(void)
{
	int nums;
	char la;
	
for (nums = 0; nums < 10; nums++)
		putchar((nums % 10) + '0');
for (la = 'a'; la <= 'f'; la++);
	putchar(la);
putchar('\n');
return (0);
}
