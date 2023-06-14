#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function to make a grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 D array
 */
int **alloc_grid(int width, int height)
{
	int **leegrid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	leegrid = malloc(sizeof(int *) * height);

	if (leegrid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		leegrid[x] = malloc(sizeof(int) * width);

		if (leegrid[x] == NULL)
		{
			for (; x >= 0; x--)
				free(leegrid[x]);

			free(leegrid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			leegrid[x][y] = 0;
	}

	return (leegrid);
}
