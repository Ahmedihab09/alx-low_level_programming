#include <stdlib.h>

/**
 * free_grid - Free the memory of a 2-dimensional grid.
 * @grid: Pointer to the grid to be freed.
 * @height: The height of the grid (number of rows).
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
