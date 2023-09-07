#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check the code
 *
 * @b: b
 *
 * Return: Always 0.
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
