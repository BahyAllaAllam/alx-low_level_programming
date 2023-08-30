#include <math.h>
#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the code
 *
 * @n: n
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	int s = sqrt(n);

	if (n % s != 0)
	{
		return (-1);
	}
	return (s);
}
