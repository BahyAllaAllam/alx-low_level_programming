#include "main.h"

/**
 * _isupper - entry point.
 *
 * @c: false or true validation.
 *
 * Return: 0 (Success).
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
