#include "main.h"
#include <string.h>

/**
 * _memcpy - prints buffer in hexa
 *
 * @dest: the address of memory to print
 *
 * @src: the size of the memory to print
 *
 * @n: n
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
