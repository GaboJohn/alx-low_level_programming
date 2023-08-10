#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *s;
	int a, b;

	if (min > max)
		return (NULL);

	b = max - min + 1;
	s = malloc(sizeof(int) * b);

	if (s == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		s[a] = min;
		min++;
	}
	return (s);

}
