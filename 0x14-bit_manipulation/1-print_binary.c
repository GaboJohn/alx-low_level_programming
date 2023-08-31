#include "main.h"

/**
 * print_binary - prints binary representation
 * @n: printed number in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int start;
	int x;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (x = 63; x >= 0; x--)
	{
		bit = n >> x;
	
	if (bit & 1)
	{
		_putchar('1');
		start = 1;
	}

	else if (start)
	{
		_putchar('0');
	}
	}
}
