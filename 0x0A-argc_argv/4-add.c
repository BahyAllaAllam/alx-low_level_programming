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
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
