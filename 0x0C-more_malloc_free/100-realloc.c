#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory in the heap
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of allocated memory
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t a, max = new_size;
	char *s;
	char *olds = ptr;

	if (ptr == NULL)
	{

		s = malloc(new_size);
			return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);
		if (s == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (a = 0; a < max; a++)
		s[a] = olds[a];
	free(ptr);

	return (s);
}
