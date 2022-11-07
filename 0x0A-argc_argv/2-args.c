#include "main.h"
#include <stdio.h>

/**
 *main - print all argument it recieves
 *@argc: no of argument
 *@argv: pointer to array
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
