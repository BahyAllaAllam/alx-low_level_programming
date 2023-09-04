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
	if (size <= 0)
	{
		return (0);
	}
	char *ptr = malloc(size);
	unsigned int i = 0;

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
