#include "main.h"

/**
 * clear_bit - clears the value of a bit
 * @n: pointer to the number
 * @index: index of a bit to clear
 *
 * Return: 1 (success), -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
