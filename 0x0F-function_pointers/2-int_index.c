#include "function_pointers.h"
/**
 * int_index -Searches for an integer
 * @array: The array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to be used to compare
 * @int_index: Returns the index for the first element
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
