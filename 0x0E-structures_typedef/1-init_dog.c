#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
