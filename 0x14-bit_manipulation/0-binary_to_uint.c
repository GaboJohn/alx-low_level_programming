#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number
 * @b: points to a string of binary
 * Return: converted number otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] == '0')
		{
			result <<= 1;
		}
		else if (b[x] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
