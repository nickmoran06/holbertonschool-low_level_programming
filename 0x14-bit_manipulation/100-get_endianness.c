#include "holberton.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	char last_digit = 1;
	char *check = (char *) &last_digit;

	return (*check);
}
