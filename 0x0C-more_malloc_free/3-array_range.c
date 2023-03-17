#include "main.h"
#include <stdlib.h>
/**
 * *array_range - Creates an array of integers
 * @min: Smallest array of integers
 * @max: Largest array of integers
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min;
		i++;
	}
	return (arr);
}
