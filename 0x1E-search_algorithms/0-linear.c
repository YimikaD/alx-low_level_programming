#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS and first index value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t indx;

	if (array == NULL)
	{
		return (-1);
	}

	for (indx = 0; indx < size; indx++)
	{
		printf("Value checked array[%lu] = [%d]\n", indx, array[indx]);

		if (array[indx] == value)
		{
			return (indx);
		}
	}
	return (-1);
}
