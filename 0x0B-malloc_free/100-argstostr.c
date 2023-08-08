#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int n, x, y = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)
	{
		for (x = 0; av[n][x]; x++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)
	{
		for (x = 0; av[n][x]; x++)
		{
			str[y] = av[n][x];
			y++;
		}
		if (str[y] == '\0')
		{
			str[y++] = '\n';
		}
	}
	return (str);
}
