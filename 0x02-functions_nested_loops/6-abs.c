#include "holberton.h"
/**
 * _abs - convert to a positive number
 * Return: a success
 * @a: The variable
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		a = (a * -1);
		return (a);
	}
}
