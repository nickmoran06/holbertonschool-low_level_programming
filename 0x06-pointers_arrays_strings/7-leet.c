#include "holberton.h"
/**
 * leet - encode a string in 1337
 * @n: string
 * Return: string to success
 */
char *leet(char *n)
{
	int s, d;
	char arr1[10] = {97, 101, 111, 116, 73, 65, 69, 79, 84, 76};
	char arr2[10] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49};

	for (s = 0; *(s + n) != 0; s++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (n[s] == arr1[d])
				n[s] = arr2[d];
		}
	}
	return (n);
}
