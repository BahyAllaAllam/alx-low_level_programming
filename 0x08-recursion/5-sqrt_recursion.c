#include "main.h"

/**
 * sqr - check the code
 *
 * @x: n
 *
 * @v: v
 *
 * Return: Always 0.
 */

int sqr(int x, int v)
{
	if (v * v == x)
		return (v);
	else if (v * v < x)
		return (sqr(x, v + 1));

	return (-1);
}

/**
 * _sqrt_recursion - check the code
 *
 * @n: n
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
