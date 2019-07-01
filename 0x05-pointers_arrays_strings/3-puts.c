#include "holberton.h"
/**
 * _puts - returns the lenght of a string
 * @s: the pointer
 * Return: return the value to success
 */
void _puts(char *str)
{
        int n;

        for (n = 0; str[n] != '\0'; n++)
        {
		_putchar(str[n]);
        }

        _putchar ('\n');
}
