#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n: n
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, x;

		for (i = 1; i <= n; i++)
		{
			for (x = 1; x <= i; x++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
