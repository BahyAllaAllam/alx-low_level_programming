#include "main.h"

/**
 * print_alphabet - entry point.
 *
 * Description: false or true validation.
 *
 * Return: 0 (Success).
*/
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
