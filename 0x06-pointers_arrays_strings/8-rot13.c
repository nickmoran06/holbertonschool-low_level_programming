#include "holberton.h"
/**
 * rot13 - encode a string using rot13
 * @n: string
 * Return: n success
 */
char *rot13(char *n)
{
	int s = 0, d;
	char arr1[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(n + s))
	{
		for (d = 0; d <= 52; d++)
		{
			if (n[s] == arr1[d])
			{
				n[s] = arr2[d];
				break;
			}
		}
		s++;
	}
	return (n);
}
