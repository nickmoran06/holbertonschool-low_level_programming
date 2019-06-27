#include "holberton.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 to success
 *
 */
int main(void)
{
	int n100;

	for (n100 = 1; n100 <= 100; n100++)
	{
		if (n100 % 3 == 0 && n100 % 5 != 0)
		{
			printf("Fizz ");
		}
		if (n100 % 5 == 0 && n100 % 3 != 0)
		{
			printf("Buzz ");
		}
		if (n100 % 3 == 0 && n100 % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		if (n100 % 3 != 0 && n100 % 5 != 0)
		{
			printf("%d ", n100);
		}
	}
	putchar(10);
	return (0);
}
