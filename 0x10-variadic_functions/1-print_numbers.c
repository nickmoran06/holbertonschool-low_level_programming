#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -  a function that prints numbers
 * @separator: pointer
 * @n: number of the var_list
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator)
	{
		unsigned int counter;
		va_list number;

		va_start(number, n);

		for (counter = 0; counter < n; counter++)
		{
			printf("%i", va_arg(number, int));
			if (counter < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(number);
	}
}
