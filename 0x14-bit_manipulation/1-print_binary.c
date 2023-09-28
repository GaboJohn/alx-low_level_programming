#include "main.h"

/**
 * print_binary - prints binary number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	int count = sizeof(unsigned long int) * 8 - 1;
	int x = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	while (count >= 0)
	{
		if ((n >> count) & 1)
		{
			_putchar('1');
			x = 1;
		}
		else if (x)
		{
			_putchar('0');
		}
	count--;
	}
}
