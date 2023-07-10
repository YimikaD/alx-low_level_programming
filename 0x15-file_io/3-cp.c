#include "main.h"

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
	int fd_r, fd_w, r, a, b;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd_r, buffer, BUFSIZ)) > 0)
	{
		if (fd_w < 0 || write(fd_w, buffer, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(fd_r);
	b = close(fd_w);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}
