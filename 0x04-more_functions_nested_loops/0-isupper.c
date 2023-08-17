#include "main.h"
#include <ctype.h>

/**
 * _isupper - entry point.
 *
 * @c: false or true validation.
 *
 * Return: 0 (Success).
*/

int _isupper(int c)
{
	if (isupper(c) == 256)
	{
		return (1);
	}
}
