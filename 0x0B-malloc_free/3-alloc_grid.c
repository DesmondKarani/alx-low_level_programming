#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: A pointer to the newly allocated 2D array,
 *	initialized to 0, or NULL on failure or if
 *	width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated rows in case of failure */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialize elements to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
