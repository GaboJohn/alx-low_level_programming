#include <stdlib.h>
#include "main.h"
/**
 * ch_free_grid - main entry
 * @grid: input
 * @height: input
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
		free(grid);

	}
}
/**
 * strtow -split string into two
 * @str: string with words to be splited
 *
 * Return: pointer to the new allocated memory for the string
 */
char **strtow(char *str)
{
size_t n, x, y,  be, height;
char **abc;

if (str == NULL || *str == '\0')
return (NULL);

for (n = height = 0; str[n] != '\0'; n++)
if (str[n] != ' ' && (str[n + 1] == ' ' || str[n + 1] == '\0'))
height++;
abc = malloc(sizeof(char *) * (height + 1));
if (abc == NULL)
{
free(abc);
return (NULL);
}
for (x = be = 0; x < height; x++)
{
for (n = be; str[n] != '\0'; n++)
{
if (str[n] == ' ')
be++;
if (str[n] != ' ' && (str[n + 1] == ' ' || str[n + 1] == '\0'))
{
abc[x] = malloc((n - be + 2) * sizeof(char));
if (abc[x] == NULL)
{
ch_free_grid(abc, x);
return (NULL);
}
break;
}
}
for (y = 0; be <= n; be++, y++)
abc[x][y] = str[be];
abc[x][y] = '\0';
}
abc[x] = NULL;
return (abc);
}
