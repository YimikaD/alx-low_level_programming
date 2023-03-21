#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Initializes structure of dog
  * @d: A dog structure.
  * @name: Dog name.
  * @age: Dog age.
  * @owner: The owner of the dog.
  *
  * Return: Nothing
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

