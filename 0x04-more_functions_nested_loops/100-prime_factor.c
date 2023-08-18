#include <stdio.h>

/**
 * _sqrt - check the code
 *
 * @x: x
 *
 * Return: Always 0.
 */

double _sqrt(double x)
{
	float s, t;

	s = x / 2;
	t = 0;

	while (s != t)
	{
		t = s;
		s = (x / t + t) / 2;
	}

	return (s);
}

/**
 * largest_prime_factor - find
 *
 * @n: n
 *
*/

void largest_prime_factor(long int n)
{
	int pn, l;

	while (n % 2 == 0)
		n = n / 2;

	for (pn = 3; pn <= _sqrt(n); pn += 2)
	{
		while (n % pn == 0)
		{
			n = n / pn;
			l = pn;
		}
	}

	if (n > 2)
		l = n;
	printf("%d\n", l);
}

/**
 * main - entry point
 *
 * Return: 0
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
