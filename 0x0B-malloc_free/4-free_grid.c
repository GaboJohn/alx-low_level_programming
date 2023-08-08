#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2dim grid
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
	}
		free(grid);
}
