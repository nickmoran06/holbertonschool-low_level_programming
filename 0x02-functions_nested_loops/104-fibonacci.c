#include <stdio.h>
/**
 * main - entry point
 * Return: any
 */
int main(void)
{
	long double Ans, count, var1, var2;

	var1 = 1;
	var2 = 2;
	for (count = 0; count <= 98; count++)
	{
		Ans = var1 + var2;
		printf("%LG, \n", Ans);
		var1 = var2;
		var2 = Ans;
	}
}
