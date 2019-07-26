#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of the var_list
 *
 * Return: sum to success, 0 if fail
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list vari;

	if (n == 0)
		return (0);

	va_start(vari, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vari, int);

	va_end(vari);

	return (sum);
}
