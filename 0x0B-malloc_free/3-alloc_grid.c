#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - fucntion that return a pointer to
 * 2 dimentional array of integers
 * @width: the width parameter
 * @height: the height parameter
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col;

	grid = (int **)malloc(height * sizeof(int));

	if (width <= 0 || height <= 0)
		return ('\0');
	if (!grid)
		return ('\0');

	for (row = 0; row < height; row++)
	{
		grid[row] = (int *)malloc(width * sizeof(int));

		if (!grid[row])
		{
			for (col = 0; col < row; col++)
			{
				free(grid[col]);
			}
			free(grid);
			return ('\0');
		}
		for (col = 0; col < width; col++)
		{
			grid[row][col] = 0;
		}
	}
	return (grid);
	free(grid);
}
