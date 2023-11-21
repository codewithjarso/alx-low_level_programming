#include <stdlib.h>

/**
  * free_grid - frees a memory allocation
  * @grid:shows the grid to be freed
  * @height: heisght of the grid
  */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
		free(grid[i];
	free(grid);
}


