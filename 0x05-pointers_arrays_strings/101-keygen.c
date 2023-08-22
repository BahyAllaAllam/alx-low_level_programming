#include <stdio.h>  
#include <string.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main (void)
{
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand() % 128;
		s += c;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}
