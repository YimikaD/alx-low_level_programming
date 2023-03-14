#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2dimensional grid
 * @grid: dimensionals grid address
 * @height: height of grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
