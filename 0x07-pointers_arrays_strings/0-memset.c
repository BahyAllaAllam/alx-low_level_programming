#include "main.h"
#include <string.h>

/**
 * _memset - prints buffer in hexa
 *
 * @s: the address of memory to print
 *
 * @b: the size of the memory to print
 *
 * @n: n
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
}
