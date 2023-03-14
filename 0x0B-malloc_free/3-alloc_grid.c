#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: the width
 * @height: the height
 * Return: Null if width and height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	char **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(sizeof(int) * width);
	if (arr[a] == NULL)
	{
		for (b = a; b >= 0; b--)
		{
			free(arr[b]);
		}
		free(arr);
		return (NULL);
	}
}
for (c = 0; c < height; c++)
{
	for (d = 0; d < width; d++)
	{
		arr[c][d] = 0;
	}
}
return (arr);
}
