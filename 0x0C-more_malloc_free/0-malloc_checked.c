#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that alloates memory using malloc
 * @b: space to reserve
 *
 * Return: value of 98
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
