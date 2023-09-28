#include "main.h"

/**
 * flip_bits - calculate number of bits needed to flip
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int tmp = 0;
	unsigned long int xor_count = n ^ m;

while (xor_count > 0)
{
	tmp += xor_count & 1;
	xor_count >>= 1;
}
return (tmp);
}
