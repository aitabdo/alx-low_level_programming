#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * **alloc_grid - a function that returns a pointer to a 2D array of integers.
 * @width: width of the array(grid)
 * @height: height of the array(grid)
 * Return: pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (!grid)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (!grid[i])
		{
			free(grid);
			for (j = 0 ; j <= i ; j++)
			{
				free(grid[j]);
			}
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
