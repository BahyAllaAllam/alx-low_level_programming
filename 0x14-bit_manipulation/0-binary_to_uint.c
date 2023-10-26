#include "main.h"
/**
 * binary_to_uint - check the code
 * @b: b
 *
 * Return: Always 0.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		m = m * 2  + (*b - '0');
		b++;
	}
	return (m);
}
