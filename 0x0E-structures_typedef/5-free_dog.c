#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees memory allocated for struct dog
  * @d: struct dog to free
  *
  * Return: ...
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
