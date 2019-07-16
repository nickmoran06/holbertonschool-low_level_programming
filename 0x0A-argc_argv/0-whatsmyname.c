#include <stdio.h>
/**
 * main - A program that prints its name, followed by a new line
 * @argc: number of arguments in the command line
 * @argv: array that contains arguments of argc
 * Return: 0 to success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
