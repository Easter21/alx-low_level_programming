#include "main.h"

/**
 *_isalpha - check either lowercase or uppercase character or other
 *@c: checking character
 *Return: int type 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
