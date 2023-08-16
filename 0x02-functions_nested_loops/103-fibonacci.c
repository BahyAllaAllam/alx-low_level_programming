#include "main.h"

/**
 * main - entry point.
 *
 * Description: false or true validation.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib1;

		if (sum > 4000000)
		{
			break;
		}
		if ((sum % 2) == 0)
		{
			total_sum += sum;
		}

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
