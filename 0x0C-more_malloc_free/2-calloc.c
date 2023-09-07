#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @z: the size of the memory to print
 *
 * Return: Nothing.
*/

char *_memset(char *s, unsigned int z)
{
	char *p = s;

	while (z--)
		*s++ = '0';

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
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0 || ptr == NULL)
		return (NULL);
	_memset(ptr, nmemb);
	return (ptr);
}
