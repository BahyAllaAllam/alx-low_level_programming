#include "main.h"

/**
 * numLength - entry point.
 *
 * @num: false or true validation.
 *
 * Return: 0 (Success).
*/

int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}
	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

/**
 * main - entry point.
 *
 * Description: false or true validation.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	int count, in;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
		{
			printf("%lu", f1o);
		}
		in = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && in > 0)
		{
			printf("%d", 0);
			in--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
