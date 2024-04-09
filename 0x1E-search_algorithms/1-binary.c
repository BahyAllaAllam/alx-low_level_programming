#include "search_algos.h"

/**
 * binary_search - Searches for a value using binary search algorithm
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, x;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array:");
		for (x = low; x <= high; x++)
			printf("%s%d", x == low ? " " : ", ", array[x]);
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

