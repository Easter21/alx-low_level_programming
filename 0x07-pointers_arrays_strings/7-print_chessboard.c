#include "main.h"

/**
 *print_chessboard - print the chessboar
 *@a: 2 d array
 *Return: print chessboard
 */

void print_chessboard(char (*a)[8])
{
	int rows, cols;

	rows = 0;
	while (rows < 8)
	{
		cols = 0;
		while (cols < 8)
		{
			_putchar(a[rows][cols]);
			cols++;
		}
		rows++;
		_putchar('\n');
	}
}
