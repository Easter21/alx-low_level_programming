#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the first 98 Fibonacci starting with 1 and 2
 *
 * Return: Always 0 successful
 */
int main(void)
{
	long int t0 = 0, t1 = 1, s;
	int i;

	for (i = 1; i <= 98; i++)
	{
		s = t0 + t1;
		if (i == 98)
		{
			printf("%lu", s);
		}
		else
		{
			printf("%lu, ", s);
		}
		t0 = t1;
		t1 = s;
	}
	printf("\n");
	return (0);
}
