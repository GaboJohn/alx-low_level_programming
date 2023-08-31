#include "main.h"

/**
 * get_bit - returns the value of bit
 * @n: unsigned long int
 * @index: index of bit
 * Return: value of bit or -1 for occured error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int binary;

	if (index > 63)
		return (-1);

	binary = ((n >> index) & 1);

	return (binary);


}
