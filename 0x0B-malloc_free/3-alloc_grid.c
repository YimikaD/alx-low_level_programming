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
	char **ar;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ar[a] = malloc(sizeof(int) * width);
	if (ar[a] == NULL)
	{
		for (b = a; b >= 0; b--)
		{
			free(arr[b]);
		}
		free(ar);
		return (NULL);
	}
}
for (c = 0; c < height; c++)
{
	for (d = 0; d < width; d++)
	{
		ar[c][d] = 0;
	}
}
return (ar);
}
