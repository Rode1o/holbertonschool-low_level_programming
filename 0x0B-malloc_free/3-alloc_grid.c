#include "holberton.h"
/**
  * alloc_grid - compares two strings
  * @width: size of width
  * @height: size of height
  * Return: NULL on malloc failure or if widht or height is 0
  * double pointer if if success
**/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i = i  - 1; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

	}
	for (i = 0; j < width; j++)
		grid[i][j] = 0;
	return (grid);
}
