#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function to free 2 dimentional grid
 * @grid: grid to be free
 * @height: the height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
