#include "main.h"

/**
 * set_bit - set value of bit to 1
 * @n: pointer to number which bit will be set
 * @index: idex of bit
 *
 * Return: 1 otherwise -1 for occured errors
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
