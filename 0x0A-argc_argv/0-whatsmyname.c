#include "main.h"
#include <stdio.h>

/**
 *main - print the name of program
 *@argc: no of argument in the programe
 *@argv: no of command line in the program
 *Return: void
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
