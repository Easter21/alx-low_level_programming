#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *main - multiples od the two numbers
 *@argc: counter argument
 *@argv: pointer of array argument
 *Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Errot\n");
		return (1);
	}
	int mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%i\n", mul);


	return (0);
}
