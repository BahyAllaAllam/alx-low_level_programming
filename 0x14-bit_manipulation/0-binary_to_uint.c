#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: b
 *
 * Return: Always 0.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		sum = sum * 2  + (*b - '0');
		b++;
	}
	return (sum);
}
