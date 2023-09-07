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
		*s++ = b;

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
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == 0)
		return (NULL);

	nmemb *= size;
	while (nmemb--)
		p[nmemb] = 0;

	return (ptr);
}
