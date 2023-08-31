#include "main.h"

/**
 * set_bit - sets value of a bit
 * @n: pointer
 * @index: index of bit
 * Return: 1 (success), -1 (failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (*n | (1UL << index));
	return (1);
}
