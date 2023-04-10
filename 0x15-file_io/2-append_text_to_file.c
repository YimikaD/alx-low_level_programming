#include "main.h"

/**
 * append_text_to_file - Appends text at the end of file
 * @filename: Name of file
 * @text_content: NULL terminated string to add at the end of file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, w;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

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
