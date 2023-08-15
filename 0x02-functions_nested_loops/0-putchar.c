#include <main.h>

/**
 * main - entry point.
 *
 * Description: false or true validation.
 *
 * Return: 0 (Success).
*/
int main(void)
{
	char str[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
		_putchar(str[x]);
	_putchar('\n');

	return (0);
}
