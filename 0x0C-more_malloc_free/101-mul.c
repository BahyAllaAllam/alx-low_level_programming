#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - check the code for
 * @s: s
 *
 * Return: Always 0.
*/

int _atoi(const char *s)
{
	int si = 1;
	unsigned long int res = 0, fn, i;

	for (fn = 0; !(s[fn] >= '0' && s[fn] <= '9'); fn++)
	{
		if (s[fn] == '-')
			si *= -1;
	}
	for (i = fn; s[i] >= '0' && s[i] <= '9'; i++)
	{
		res *= 10;
		res += (s[i] - '0');
	}
	return (sign * res);
}

/**
 * print_int - check the code for
 *
 * @n: n
 *
 * Return: Always 0.
*/

void print_int(unsigned long int n)
{
	unsigned long int divi = 1, i, res;

	for (i = 0; n / divi > 9; i++, divi *= 10)
		;
	for (; divi >= 1; n %= divi, divi /= 10)
	{
		res = n / divi;
		putchar('0' + res);
	}
}

/**
 * main - check the code for
 * @argc: argc
 * @argv: argv
 * Return: Always 0.
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	putchar('\n');

	return (0);
}
