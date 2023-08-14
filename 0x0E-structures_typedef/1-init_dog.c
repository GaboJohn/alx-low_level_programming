#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initialize a variable of type struct dog
 *@d: pointer to struct of the new dog
 *@name: name of the new owner
 *@age: age of the new dog
 *@owner: owner of the new dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;

}
