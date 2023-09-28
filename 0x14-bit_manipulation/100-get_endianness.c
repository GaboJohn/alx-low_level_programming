#include "main.h"

/**
 * get_endianness - check endianness of system
 *
 * Return: 0 (big endian), 1 (little endian)
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *x = (char *)&y;

	return (x[0]);
}
