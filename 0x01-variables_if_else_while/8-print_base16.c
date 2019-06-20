#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 48; n <= 102 ; n++)
	{
		if ((n >= 48 && n <= 57) && (n >= 97 && n <= 102))
		{
			putchar (n);
		}
	}
	putchar('\n');
	return (0);
}
