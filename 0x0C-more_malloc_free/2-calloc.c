#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of block memory
 * @size: int
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t a;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;
	return (p);

}
