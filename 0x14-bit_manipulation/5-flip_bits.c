#include "main.h"
/**
 * flip_bits - check the code
 * @n: n
 * @m: m
 *
 * Return: Always 0.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	unsigned int c = 0;

	while (d > 0)
	{
		d = d & (d - 1);
		c++;
	}
	return (c);
}
