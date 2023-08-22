#include "main.h"

/**
 * print_array - check the code for
 *
 * @a: a
 *
 * @n: n
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
			printf("%d, ", a[i]);
		i++;
	}
	putchar('\n');
}
