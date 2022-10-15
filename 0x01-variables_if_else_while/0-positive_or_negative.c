#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - trying if, else and variable
 *
 * Return : Awlays 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is positive\n");
	}
	else if (n == 0)
	{
		printf("n is zero");
	}
	else if (n < 0)
	{
		printf("n is negative");
	}
	return (0);
}



