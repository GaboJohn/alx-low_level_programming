#include "lists.h"

void printFirst(void)__attribute__((constructor));

/**
 * printFirst - function that prints specified lines
 */
void printFirst(void)
{
	printf("You're beat! and you must allow,\n");
	printf("I bore my house upon my back!\n");
}
