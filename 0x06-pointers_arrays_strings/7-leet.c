#include "holberton.h"
/**
 *
 *
 *
 */
char *leet(char *n)
{
	int s = 0, d;
	char arr1[10] = {97, 101, 111, 116, 73, 65, 69, 79, 84, 76};
	char arr2[10] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49};

	while (*(s + n))
	{
		for (d = 0; d <= 9; d++)
		{
			if (n[s] == arr1[d])
				n[s] = arr2[d];
		}
		s++;
	}
	return(n);
}
