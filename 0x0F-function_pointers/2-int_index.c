#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: targeted array
 * @size: number of elements in array
 * @cmp: pointer to function used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
