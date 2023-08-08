#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to an array of int
 */
int **alloc_grid(int width, int height)
{
	int **abc;
	int n, x;

	if (width <= 0 || height <= 0)

	{
		return (NULL);
	}
	abc = malloc(height * sizeof(int *));
	if (abc == NULL)
	{
		free(abc);
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		abc[n] = malloc(width * sizeof(int));
		if (abc[n] == NULL)
		{
			for (n--; n >= 0; n--)
			free(abc[n]);
			free(abc);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{

		for (x = 0; x < width; x++)
			abc[n][x] = 0;
	}
	return (abc);
}
