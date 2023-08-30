#include "main.h"
#include <math.h>
#include <string.h>

/**
 * _pow_recursion - check the code
 *
 * @x: x
 *
 * @y: y
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	return (pow(x, y));
}
