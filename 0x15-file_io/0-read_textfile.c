#include "main.h"

/**
 * read_textfile - Reads text file and prints it to the POSIX standard output
 * @letters: Number of letters it should read and print
 * @filename: filename pointer
 * Return: The actual number of letters it cold read and print,
 * 0 if file cannot be opened or read, 0 if filename is NULL and
 * 0 if writes fails or dosen;t write the expected amount of bytes.
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
