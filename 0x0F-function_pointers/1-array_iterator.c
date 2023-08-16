#include "function_pointers.h"
/**
 * array_iterator - function that execute a funtion
 * @array: targeted array
 * @size: size of array
 * @action: pointer to function you want to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(*array);
		array++;
	}
}
