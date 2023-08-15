#include "main.h"

/**
 * _isalpha - entry point.
 *
 * @c: false or true validation.
 *
 * Return: 0 (Success).
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
