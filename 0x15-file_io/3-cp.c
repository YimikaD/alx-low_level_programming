#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 * if the number of argument is not the correct one,
 * exit with code with 97 and print usage:
 * cp file_from file_to, followed by a new line, on the POSIX standard error.
 *
 * if file_to already exists, truncate it
 *
 * if file_from does not exist, or if you can not read it, exit with code 98,
 * and print Error: Can't read from file NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error,
 * where NAME_OF_THE_FILE is the first argument passed to your program.
 *
 * f you can not create or if write to file_to fails,
 * exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error,
 * where NAME_OF_THE_FILE is the second argument passed to your program.
 *
 * if you can not close a file descriptor , exit with code 100,
 * and print Error: Can't close fd FD_VALUE, followed by a new line, on the,
 * POSIX standard error where FD_VALUE is the value of the file descriptor.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int f1, f2, r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	r = read(f1, buffer, 1024);
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0600);

	do {
		if (f1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from %s\n", argv[1]);
			exit(98);
		}
		w = write(f2, buffer, r);
		if (f2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(f1, buffer, 1024);
		f2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	return (0);
}
