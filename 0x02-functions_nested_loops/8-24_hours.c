#include "holberton.h"

/**
 * jack_bauer - the time
 *
 * Return: o success
 */
void jack_bauer(void)
{
	int c1, c2, c3, c4;

	for (c1 = 48; c1 <= 50; c1++)
	{
		for (c2 = 48; c2 <= 57; c2++)
		{
			for (c3 = 48; c3 <= 53; c3++)
			{
				for (c4 = 48; c4 <= 57; c4++)
				{
					if (c1 == 2 && c2 > 51)
					{
					}
					else
					{
					_putchar(c1 + '0');
					_putchar(c2 + '0');
					_putchar(':');
					_putchar(c3 + '0');
					_putchar(c4 + '0');
					_putchar(10);
					}
				}
			}
		}
	}
}
