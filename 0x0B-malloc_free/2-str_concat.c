#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *abc;
	size_t n, x, y, z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	n = 0;
	while (s1[n] != '\0')
	{
		n++;
	}
	x = 0;
	while (s2[x] != '\0')
	{
		x++;
	}
	abc = malloc(sizeof(char) * (n + x + 1));
	if (abc == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < n; y++)
	{
		abc[y] = s1[y];
	}
	for (z = 0; z <= x; z++)
	{
		abc[y] = s2[z];
		y++;
	}
return (abc);
}
