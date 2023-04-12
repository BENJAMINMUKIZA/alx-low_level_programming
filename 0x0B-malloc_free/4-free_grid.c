#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees two dimension
 * @grid: apointer to the grid to be freezed
 * @height: the height of grid
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
