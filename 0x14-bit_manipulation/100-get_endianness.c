#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 (big endian), 1 (small endian)
 */

int get_endianness(void)
{
	int num = 1;
	char *byte = (char *)&num;

	if (byte[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
