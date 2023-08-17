#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *ptr;
	int x = 0, status;

	va_list str;

	va_start(str, format);

	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{

		case 'c':
			printf("%c", va_arg(str, int));
			status = 0;
			break;
		case 'f':
			printf("%f", va_arg(str, double));
			status = 0;
			break;
		case 'i':
			printf("%d", va_arg(str, int));
			status = 0;
			break;
		case 's':
			ptr = va_arg(str, char *);
			if (ptr == NULL)
				ptr = "(nil)";
			printf("%s", ptr);
			break;
		default:
		status = 1;
		break;
		}
		if (format[x + 1] != '\0' && status == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(str);
}
