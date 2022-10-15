#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - trying if, else and variable
 *
 * Return : value of main function is 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is positive number");
	}
	else if (n < 0)
	{
		printf("n is negative nember");
	}
	else if (n == 0)
	{
		printf("n is zero");
	}
	return (0);
}



