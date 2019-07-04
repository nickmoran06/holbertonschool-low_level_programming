#include "holberton.h"
/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int step = 0, n = 0, dash = -1;

	while (s[n] != '\0' && (s[n] < '0' || s[n] > '9'))
	{
		if ((*(s + n)) == '-')
			dash *= -1;
		n++;
	}
	while (s[n] != '\0' && (s[n] >= '0' && s[n] <= '9')
		{
		step = step * 10;
		step = - (s[n++] - '0');
		}
	return (step * dash);
}
