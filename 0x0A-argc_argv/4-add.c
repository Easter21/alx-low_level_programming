#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the sum of posetive number
 *@argc: counter argument
 *@argv: pointe of aggay
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc < 1)
		return (0);
	while (i < argc)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%i\n", sum);

	return (0);
}
