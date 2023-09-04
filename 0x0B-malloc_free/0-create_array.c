#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0)
	{
		return (0);
	}
	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
