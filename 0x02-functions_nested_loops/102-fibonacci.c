#include <stdio.h>

/**
 *main - print the first 50 Fibonacci numbers
 *Return: Always 0
 */

int main(void)
{

	int count = 1;
	int fi = 1, sec2nd = 2;
	int next = fi + sec2nd;

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%i", next);
		}
		else
		{
			printf("%i , ", next);
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
