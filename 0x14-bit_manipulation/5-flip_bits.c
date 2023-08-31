#include "main.h"

/**
 * flip_bits - return number of bits you would need to flip
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = 0;
	unsigned long int exec = n ^ m;

	for (result = 0; exec > 0;)
	{
		if ((exec & 1) == 1)
			result++;
		exec = exec >> 1;
	}

	return (result);
}
