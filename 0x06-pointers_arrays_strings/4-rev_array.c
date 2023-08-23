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
	int len = (sizeof(a) / sizeof(int)) - 1;

	for (int i = len; i >= 0; i--)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
