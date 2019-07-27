#include "3-calc.h"

/**
 * op_add - function to sum
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
int op_add(int a, int b)(return a + b);

/**
 * op_sub - function to substract
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
int op_sub(int a, int b)(return a - b);

/**
 * op_mul - function to multiplicate
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
int op_mul(int a, int b)(return a * b);

/**
 * op_div - function to divide
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}
/**
 * op_mod - function to modulate
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
}
