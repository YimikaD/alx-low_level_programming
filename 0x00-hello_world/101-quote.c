#include <stdio.h>
#include <unistd.h>
 /**
 * main - Entry point
 * Description: A program that prints and that piece of art is useful'
 * Return: 1 (Success)
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", s);
	return (1);
}
