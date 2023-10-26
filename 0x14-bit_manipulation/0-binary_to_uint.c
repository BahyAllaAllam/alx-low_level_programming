#include "main.h"
/**
 * binary_to_uint - check the code
 * @a: a
 *
 * Return: Always 0.
*/
unsigned int binary_to_uint(const char *a)
{
	unsigned int m = 0;

	if (!a)
		return (0);
	while (*a)
	{
		if (*a != '0' && *a != '1')
			return (0);
		m = m * 2  + (*a - '0');
		a++;
	}
	return (m);
}
