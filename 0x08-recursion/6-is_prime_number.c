#include "holberton.h"

/**
 * is_prime_number - Write a function that returns 1/
 * if the input integer is a prime number, otherwise return 0.
 * @n: prime number
 * Return: 1 if is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	return (calc_ans(n, 2));
}

/**
 * check_prime - calculator of prime number
 * @n: integer
 * @calc_ans: number of repetitions
 * Return: calculate_prime_numbe
 */
int calc_ans(int n, int s)
{
	if (s % n == 0)
		return (0);

	else if (n + 1 == s  && s % n != 0)
		return (1);

	return (calc_ans(n + 1, s));
}
