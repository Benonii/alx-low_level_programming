#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a previosuly allocated 2d array
 * @grid: The grid
 * @height: How much of the grid we plan to free
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
