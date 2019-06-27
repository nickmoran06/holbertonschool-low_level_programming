#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 success
 *
 */
int main(void)
{
	long int v1 = 1, v2 = 2, a;
	int n;

	printf("1, 2, ");
	for (n = 0; n < 48; n++)
	{
		r = v1 + v2;
		printf("%ld", a);
		v1 = v2;
		v2 = a;
		if (n != 47)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
