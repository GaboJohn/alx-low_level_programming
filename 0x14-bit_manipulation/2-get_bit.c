#include "main.h"

/**
 * get_bit - get value of bit at given index
 * @n: nuber to extract bit from
 * @index: index of bit
 *
 * Return: value of bit otherwise -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
