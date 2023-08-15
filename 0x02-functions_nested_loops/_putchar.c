#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - entry point.
 *
 * @c: false or true validation.
 *
 * Return: 0 (Success).
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
