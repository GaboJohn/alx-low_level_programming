#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its paramters.
 * @n: number of arguments passed to the function.
 *
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, x;

	va_list keeper;

	va_start(keeper, n);

	for (x = 0; n > x; x++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(keeper, const unsigned int);
		}

	}
	va_end(keeper);
	return (sum);
}
