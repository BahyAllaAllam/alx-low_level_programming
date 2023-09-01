#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	if (argc != 3)
	{
		puts("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
