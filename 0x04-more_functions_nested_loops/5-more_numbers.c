#include "holberton.h"
/**
 * more_numbers - 0 to 14, 10 times
 *
 * Return: 0 to success
 *
 */
void more_numbers(void)
{
	int n, REP;

	for (REP = 0; REP < 10; REP++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar(10);
	}
}
