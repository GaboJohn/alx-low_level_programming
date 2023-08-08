#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 *
 * @str: char
 * Return: pointer to memory allocated
 */
char *_strdup(char *str)
{
	char *abc;
	size_t n, x;

	if (str == NULL)
	{
		return (NULL);
	}
	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	abc = malloc(sizeof(char) * (n + 1));

	if (abc == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= n; x++)
	{
		abc[x] = str[x];
	}
	return (abc);

}
