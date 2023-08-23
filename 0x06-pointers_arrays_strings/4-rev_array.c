#include "main.h"
#include <string.h>

/**
 * reverse_array - check the code
 *
 * @a: a
 *
 * @n: n
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
