#include "main.h"

/**
 *_islower - check either lower character or other
 *@c: checking character
 *Return: int type 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
