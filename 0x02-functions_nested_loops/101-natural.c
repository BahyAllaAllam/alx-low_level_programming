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
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
