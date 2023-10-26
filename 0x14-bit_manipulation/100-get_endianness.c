#include "main.h"

/**
 * get_endianness - check the code
 *
 * Return: Always 0.
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *p = (char *)&x;

	if (*p == 1)
		return (1);
	else
		return (0);
}
