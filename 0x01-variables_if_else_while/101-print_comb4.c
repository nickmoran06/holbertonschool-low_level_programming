#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t, n, d;

	for (t = 48; t <= 57; t++)
	{
		for (n = 48; n <= 57; n++)
		{
			for (d = 48; d <= 57; d++)
			{
				if ((t < n) && (n < d) && (t < d))
				{
					putchar (t);
					putchar (n);
					putchar (d);
					if ((t != 55) || (n != 56) || (d != 57))
					{
						putchar (44);
						putchar (' ');
					}
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
