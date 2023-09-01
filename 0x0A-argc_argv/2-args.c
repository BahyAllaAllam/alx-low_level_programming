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

int main(int argc, char const *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
