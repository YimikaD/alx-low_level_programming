#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index marking the end of the first word in a string
 * @str: string to find
 * Return: the index marking the end of first word pointed by @str
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - counts the number of words within a string
 * @str: string to be found
 * Return: number of string counted
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + len) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
		return (words);
	}

/**
 * **strtow - splits a string into words
 * @str: string to be spilt
 * Returns: NULL if str == NULL or str == "", or a NULL if function fails
 * otherwise, return pointer to an array of strings(words)
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		strings[w] = malloc(sizeof(char) * (letters + 1));
		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
