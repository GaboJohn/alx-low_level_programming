#include "main.h"

/**
 * print_binary - prints binary representation
 * @n: printed number in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int start = 0;
	int x;

	for (x = 63; x >= 0; x--)
	{
		bit = n >> x;

	if (bit & 1)
	{
		_putchar('1');
		start++;
	}

	else if (start)
	{
		_putchar('0');
	}
	}
	if (!start)
		_putchar('0');
}
