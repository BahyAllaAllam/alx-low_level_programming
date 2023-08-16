#include "main.h"

/**
 * _abs - entry point.
 *
 * @x: false or true validation.
 *
 * Return: 0 (Success).
*/

int _abs(int x)
{
	if (x < 0)
		x = (-1) * x;
	return (x);
}
