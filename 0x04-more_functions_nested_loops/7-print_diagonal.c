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
	int i = 1, x = 1;

	if (n <= 0)
		_putcahr('\n');
	else
	{
		while (i <= n)
		{
			while (x <= i)
			{
				_putcahr(' ');
				x++
			}
			_putcahr(92);
			_putcahr('\n');
			i++;
		}
	}
}
