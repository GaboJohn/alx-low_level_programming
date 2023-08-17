#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int x;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (x = 0; n > x; x++)
	{
		str = va_arg(ptr_str, char *);

		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
		}
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}
