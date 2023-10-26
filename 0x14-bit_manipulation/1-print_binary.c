#include "main.h"
/**
 * print_binary - check the code
 * @n: n
 *
 * Return: Always 0.
*/
void print_binary(unsigned long int n)
{
	int bit, i = sizeof(unsigned long int) * 8 - 1, flag = 0;

	if (n == 0)
		putchar('0');
	for (; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
		{
			flag = 1;
			putchar('1');
		}
		else if (flag == 1)
			putchar('0');
	}
}
