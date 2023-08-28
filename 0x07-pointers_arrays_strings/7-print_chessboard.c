#include "main.h"
#include <string.h>

/**
 * print_chessboard - prints buffer in hexa
 *
 * @a: the address of memory to print
 *
 * Return: Nothing.
 */

void print_chessboard(char (*a)[8])
{
	int len = sizeof(a) / sizeof(char) - 1;
	int i, x;

	for (i = 0; i <= len; i++)
	{
		for (x = 0; x <= 7; x++)
		{
			putchar(a[i][x]);
		}
		putchar('\n');
	}
}
