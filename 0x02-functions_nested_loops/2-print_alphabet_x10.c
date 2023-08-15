#include "main.h"

/**
 * print_alphabet_x10 - entry point.
 *
 * Description: false or true validation.
 *
 * Return: 0 (Success).
*/
void print_alphabet_x10(void)
{
	int l, x;

	for (l = 0; l <= 9; l++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
