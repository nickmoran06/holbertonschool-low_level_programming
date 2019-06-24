#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10 times in order
 *
 */
void print_alphabet_x10(void)
{
	int N, D;

	for (D = 0; D < 10; D++)
{
	for (N = 97; N <= 122; N++)
		_putchar(N);

	_putchar(10);
}
}
