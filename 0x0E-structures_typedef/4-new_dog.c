#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - creates a new dog
 *@name: name of new dog
 *@age: age of the new dog
 *@owner: owner of new dog
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	size_t x, y, z;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; name[x] != '\0'; x++)
		;
	x++;
	dog->name = malloc(sizeof(char) * x);
	if (dog->name == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (y = 0; y < x; y++)
		dog->name[y] = name[y];
	dog->age = age;
	for (z = 0; owner[z] != '\0'; z++)
		;
	z++;
	dog->owner = malloc(sizeof(char) * z);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->owner);
		return (NULL);
	}
	for (x = 0; x < z; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
