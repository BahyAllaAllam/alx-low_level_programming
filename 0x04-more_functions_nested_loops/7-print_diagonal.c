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
	int i = 1;
	int x = 1;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i <= n)
		{
			while (x <= i)
			{
				_putchar(' ');
				x++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
