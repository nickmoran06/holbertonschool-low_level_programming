#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: number of arguments in the command line
 * @argv: array that contains arguments of argc
 * Return: 0 to success
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int n = 0, c = 0;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n > 0)
		{
			for (; n >= 25; c++)
			{
				n = n - 25;
			}
			for (; n >= 10; c++)
			{
				n = n - 10;
			}
			for (; n >= 5; c++)
			{
				n = n - 5;
			}
			for (; n >= 2; c++)
			{
				n = n - 2;
			}
			for (; n >= 1; c++)
			{
				n = n - 1;
			}
		}
		printf("%d\n", c);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
