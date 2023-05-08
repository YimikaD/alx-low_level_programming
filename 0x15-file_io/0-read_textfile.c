#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 * @letters:Number of letters it should read and print.
 * @filename: Filename pointer.
 * Return: The actual of number of letters it could read amd prints,
 * 0 if file could not be opened and read, 0 if filename is NULL and
 * 0 if file writes failes or dosent't write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, r, w;
	char *ptr;

	if (filename == NULL)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	r = read(f, ptr, letters);
	if (r == -1)
	{
		free(ptr);
		return (0);
	}
	w = write(STDOUT_FILENO, ptr, r);

	if (w != r)
	{
		free(ptr);
		return (0);
	}

	free(ptr);
	close(f);
	return (w);
}
