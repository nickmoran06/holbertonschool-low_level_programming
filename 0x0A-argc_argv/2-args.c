#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * @argc: number of arguments in the command line
 * @argv: array that contains arguments of argc
 * Return: 0 to success
 */
int main(int argc, char *argv[])
{
	int carac;

	for (carac = 0; carac < argc; carac++)
	{
		printf("%s\n", argv[carac]);
	}
	return (0);
}
