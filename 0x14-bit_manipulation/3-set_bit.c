#include "main.h"

/**
 * set_bit - check the code
 * @n: n
 * @index: index
 *
 * Return: Always 0.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8 || n == NULL)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
