#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the minimum number of coins
 *@argc: no of argument
 *@argv: pointer of array argument
*Return: list of coin is less than 0 return 0 , otherwise
 */

int main(int argc, char *argv[])
{
	int n, coins = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	/* calculate min coins and convert sting to int using atoi */
	n = atoi(argv[1]);
	coins = coins + (n / 25);
	n = n % 25;
	coins = coins + (n / 10);
	n = n % 10;
	coins = coins + (n / 5);
	n = n % 5;
	coins = coins + (n / 2);
	n = n % 2;
	coins += n / 1;

	printf("%d\n", coins);
	return (0);
}
