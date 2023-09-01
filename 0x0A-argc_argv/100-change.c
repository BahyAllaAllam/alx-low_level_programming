#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints buffer in hexa
 *
 * @argc: the address of memory to print
 *
 * @argv: the size of the memory to print
 *
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, lc = 0, m = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= c[i])
			{
				lc += m / c[i];
				m = m % c[i];
				if (m % c[i] == 0)
					break;
			}
		}
		printf("%d", lc);
	}
	return (printf("Error\n"), 1);

	return (0);
}
