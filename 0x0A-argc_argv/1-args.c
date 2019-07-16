#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number of arguments in the command line
 * @argv: array that contains arguments of argc
 * Return: 0 to success
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
