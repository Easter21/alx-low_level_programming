#include <stdio.h>
/* #include "main.h " */

/**
 *main - print the sum of multiple of 3 and 5 less than 1024
 *Return: Always 0
 */

int main(void)
{
	int num = 0;
	int sum = 0;

	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum = sum + num;
		}
		num++;
	}
	printf("%i\n", sum);

	return (0);
}
