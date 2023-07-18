#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
{
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
}
