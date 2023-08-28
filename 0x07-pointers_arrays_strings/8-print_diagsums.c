#include "main.h"
#include <string.h>

/**
 * print_diagsums - prints buffer in hexa
 *
 * @a: the address of memory to print
 *
 * @size: size
 *
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
