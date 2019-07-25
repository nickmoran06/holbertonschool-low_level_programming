#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result
 * @argc: argument count
 * @argv: arguments
 *
 * Return: expect a pointer
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
