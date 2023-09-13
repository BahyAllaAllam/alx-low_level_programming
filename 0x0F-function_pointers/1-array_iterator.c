#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: size
 * @action: action
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		int i = 0;

		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
