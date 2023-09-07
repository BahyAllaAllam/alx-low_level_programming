#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @z: the size of the memory to print
 * @b:b
 *
 * Return: Nothing.
*/

char *_memset(char *s, char b, unsigned int z)
{
	char *p = s;

	while (z--)
		p[z] = b;

	return (p);
}

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == 0)
		return (NULL);

	_memset(ptr, 0, size * nmemb);

	return (ptr);
}
