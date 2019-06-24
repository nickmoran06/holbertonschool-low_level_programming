#include <stdio.h>

/**
 * main - Print possible combinations of two two-digit numbers
 * Return: 0
 **/

int main(void)
{
	int n, d, t, h;

	for (n = 48; n <= 57; n++)
	{
		for (d = 48; d <= 57; d++)
		{
			for (t = n; t <= 57; t++)
			{
				if (t == n)
				{
					h = d + 1;
				}
				else
				{
					h = 48;
				}

				for (h = h; h <= 57; h++)
				{
					putchar(n);
					putchar(d);
					putchar(32);
					putchar(t);
					putchar(h);
					if (!(n == 57 && d == 56
					      && t == 57 && h == 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
