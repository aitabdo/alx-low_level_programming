#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid function.
 * @height: height of the array(grid)
 * @grid: our previous grid that need to be freed.
 * Return: pointer to grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (!grid || !height)
	{
		return;
	}
	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
