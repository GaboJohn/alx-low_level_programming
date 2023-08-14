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
	size_t y, len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (len1 = 0; name[len1]; len1++)
		;
	len1++;
	dog->name = malloc(sizeof(char) * len1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (y = 0; y < len1; y++)
		dog->name[y] = name[y];
	dog->age = age;
	for (len2 = 0; owner[len2]; len2++)
		;
	len2++;
	dog->owner = malloc(sizeof(char) * len2);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (y = 0; y < len2; y++)
		dog->owner[y] = owner[y];
	return (dog);
}
