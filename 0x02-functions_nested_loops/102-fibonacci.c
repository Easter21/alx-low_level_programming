#include <stdio.h>

/**
 *main - print the first 50 Fibonacci numbers
 *Return: Always 0
 */

int main(void)
{

	int count = 3;
	long fi = 1, sec2nd = 2;
	long next = fi + sec2nd;

	printf("%lu, ", fi);
	printf("%lu, ", sec2nd);


	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu ", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		fi = sec2nd;
		sec2nd = next;
		next = fi + sec2nd;
		count++;
		/*printf("\n"); */
	}
	printf("\n");
	return (0);
}
