#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments in the command line
 * @argv: array that contains arguments of argc
 * Return: 0 to success
 */
int main(int argc, char *argv[])
{
	int counter, mul = 1;

	if (argc == 3)
	{
		for (counter = 1; counter < 3; counter++)
		{
			mul = mul * atoi(argv[counter]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
