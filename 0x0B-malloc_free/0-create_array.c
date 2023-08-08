#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *@c: stores strings of chars
 *@size: size of array
 *Return: pointer to array otherwise NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	size_t n;

	str = malloc(sizeof(char) * size);

	if (str == 0 || size == 0)
	{
	return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		str[n] = c;
	}
	return (str);

}
