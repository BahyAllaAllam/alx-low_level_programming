#include "main.h"

/**
 * isPrimeNumber - check the code
 *
 * @num: n
 *
 * @x: x
 *
 * Return: Always 0.
 */

int isPrimeNumber(int num, int x)
{
	if (x >= num && num > 1)
		return (1);
	else if (num % x == 0 || num <= 1)
		return (0);

	return (isPrimeNumber(num, x + 1));
}

/**
 * is_prime_number - check the code
 *
 * @n: n
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	return (isPrimeNumber(n, 2));
}
