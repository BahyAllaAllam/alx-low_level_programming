#include "main.h"

/**
 * print_line - check the code
 *
 * @n: n
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
