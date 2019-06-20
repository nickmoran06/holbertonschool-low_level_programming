#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, d;

	for (n = 48; n <= 57; n++)
	{
		for (d = 48; d <= 57 ; d++)
		{
			putchar (n);
			putchar (d);
			if (n != 57 || d != 57)
			{
				putchar (44);
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
