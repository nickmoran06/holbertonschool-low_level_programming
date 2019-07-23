#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: new name of the new dog
 * @age: new age of the new dog
 * @owner: new owner of the new dog
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i = 0;
	int j = 0;
	int k;
	int l;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	while (name[i] != '\0')
		i++;
	d->name = malloc(sizeof(char) * (i + 1));
	if (!(d->name))
	{
		free(d);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		d->name[k] = name[k];

	d->age = age;

	while (owner[j] != '\0')
		j++;
	d->owner = malloc(sizeof(char) * (j + 1));
	if (!(d->owner))
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	for (l = 0; l <= j; l++)
		d->owner[l] = owner[l];
	return (d);
}
