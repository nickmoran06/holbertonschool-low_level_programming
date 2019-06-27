#include "holberton.h"
/**
 *_isdigit - check digit between 0-9
 * @c: number
 * Return: 0 success 1 for number betwwen 0-9
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
