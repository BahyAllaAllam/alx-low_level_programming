#include "main.h"

/**
 * print_last_digit - entry point.
 *
 * @x: false or true validation.
 *
 * Return: 0 (Success).
*/

int print_last_digit(int x)
{
	int ld;

	if (x < 0)
	{
		ld = -1 * (x % 10);
	}
	else
	{
		ld = x % 10;
	}
	_putchar(ld + '0');
	return (ld);
}
