#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initializes a struct dog variable.
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: Name of the dog (string).
 * @age: Age of the dog (float).
 * @owner: Owner's name (string).
 *
 * Description: This function initializes the members of a struct dog variable
 * with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

