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
			for (x = 1; x <= n; x++)
			{
				if (i == x)
					_putchar('\\');
				else if (x < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
