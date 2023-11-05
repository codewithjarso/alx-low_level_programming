#include <stdlib.h>
/**
 * alloc_grid -function to return 2d array
 * @width:width input
 * @height: height input
 * Return:address of array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int) * (width + height));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
	free(ptr);
	ptr = NULL;
}



