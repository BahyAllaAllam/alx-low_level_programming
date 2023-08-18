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
	int i, x;

	if (n <= 0)
		_putcahr('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (x = 1; x <= i; x++)
			{
				_putcahr(' ');
			}
			_putcahr(92);
			_putcahr('\n');
		}
	}
}
