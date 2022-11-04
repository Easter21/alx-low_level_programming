#include "main.h"
#include <stdio.h>

/**
 *main - print number of argument
 *@argc: no of argument in the program
 *@argv: array of string
 *Return: 0 of success or other is error
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
