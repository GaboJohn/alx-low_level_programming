#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: pointer to a string
 *
 * Return: converted number otherwise 0;
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int equal_to = 0;
	int x;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		equal_to = 2 * equal_to + (b[x] - '0');
	}
	return (equal_to);
}
