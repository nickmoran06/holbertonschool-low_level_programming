#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 success
 *
 */
int main(void)
{
	long int v1 = 1, v2 = 2, n, Ans = 2;

	while (1)
	{
		n = v1 + v2;
		if (n > 4000000)
			break;
		if (n % 2 == 0)
			Ans += n;
		v1 = v2;
		v2 = n;
	}
	printf("%ld\n", Ans);
	return (0);
}
