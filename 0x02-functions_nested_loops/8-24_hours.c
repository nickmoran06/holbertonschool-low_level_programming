#include "holberton.h"

/**
 * jack_bauer - the time
 *
 * Return: o success
 */
void jack_bauer(void)
{
	int c1, c2, c3, c4;

	for (c1 = 0; c1 <= 2; c1++)
	{
		for (c2 = 0; c2 <= 4; c2++)
		{
			for (c3 = 0; c3 <= 5; c3++)
			{
				for (c4 = 0; c4 <= 9; c4++)
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
