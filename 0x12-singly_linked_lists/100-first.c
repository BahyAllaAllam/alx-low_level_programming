#include <stdio.h>

void construct(void) __attribute__ ((constructor));

/**
 * construct - check the code
 *
 * Return: NULL
 */
void construct(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
