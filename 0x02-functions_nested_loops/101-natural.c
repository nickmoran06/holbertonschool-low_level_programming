#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
  int n, Ans = 0;

  for (n = 0; n < 1024; n++)
    {
      if (n % 3 == 0 || n % 5 == 0)
	Ans += n;
    }
  printf("%d\n", Ans);
  return (0);
}
