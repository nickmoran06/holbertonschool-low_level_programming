#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings -  a function that prints strings
 * @separator:  is the string to be printed between the strings
 * @n: number of the var_list
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator)
	{
		unsigned int counter;
		char *stg;
		va_list string;


		va_start(string, n);

		for (counter = 0; counter < n; counter++)
		{
			stg = va_arg(string, char *);
			if (stg)
				printf("%s", stg);
			else
				printf("(nil)");
			if (counter < n - 1 && separator)
				printf("%s", separator);
		}
		printf("\n");
		va_end(string);
	}
}
