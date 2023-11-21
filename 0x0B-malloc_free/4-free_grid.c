#include <stdlib.h>

/**
  * free_grid - frees a memory allocation
  * @grid:shows the grid to be freed
  * @height: heisght of the grid
  */
void free_grid(int **grid, int height)
{
<<<<<<< HEAD
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
=======
	for (int i = 0; i < height; i++)
		free(grid[i];
>>>>>>> 8f56fd52b04e8ba68a8a6757439f48c6f3cb936e
	free(grid);
}


