#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type
 * @d: array
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: This struct initializes variable type for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
