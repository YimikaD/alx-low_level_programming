#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of file to be created
 * @text_content: NULL terminated string.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f, w;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	w = write(f, text_content, strlen(text_content));

	if (w == -1)
		return (-1);

	close(f);
	return (1);

}
