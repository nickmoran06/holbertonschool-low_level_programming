#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	long int n, prime;

	prime = 612852475143;
	for (n = 2; n < prime; n++)
	{
		if (prime % n == 0)
		{
			prime /= n;
			n--;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
