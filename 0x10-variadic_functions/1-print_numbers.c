#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int str, x;

	va_list keeper;

	va_start(keeper, n);

	for (x = 0; n > x; x++)
	{
		str = va_arg(keeper, const unsigned int);
		printf("%d", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(keeper);
}
