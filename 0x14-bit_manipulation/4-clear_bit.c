#include "main.h"

/**
 * clear_bit - check the code
 * @n: n
 * @index: index
 *
 * Return: Always 0.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(*n) * 8 || n == NULL)
		return (-1);
	i = ~(1UL << index);
	*n = *n & i;
	return (1);
}
