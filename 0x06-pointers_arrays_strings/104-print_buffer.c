#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * isprintableascii - check code
 *
 * @n: n
 *
 * Return: Always 0.
 */

int isprintableascii(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printhexes - check the code
 *
 * @b: b
 *
 * @start: start
 *
 * @end: end
 *
 * Return: Always 0.
 */
void printhexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
		{
			printf("%02x", *(b + start + i));
		}
		else
		{
			printf("  ");
		}
		if (i % 2)
		{
			printf(" ");
		}
		i++;
	}
}

/**
 * printasccii - check the code
 *
 * @b: b
 *
 * @start: start
 *
 * @end: end
 *
 * Return: Always 0.
 */

void printasccii(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);

		if (!isprintableascii(ch))
		{
			ch = 46;
		}
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - check the code
 *
 * @b: b
 *
 * @size: size
 *
 * Return: Always 0.
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printhexes(b, start, end);
			printasccii(b, start, end);
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
