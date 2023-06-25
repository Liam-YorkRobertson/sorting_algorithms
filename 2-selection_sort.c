#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: array of integers to be sorted
 * @size: size of array
 * Return: none (void)
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; ++i)
	{
		min = i; /* assume current element is the minimum */

		for (j = i + 1; j < size; ++j) /* find min in unsorted part of array */
		{
			if (array[j] < array[min]) /* update min */
			{
				min = j;
			}
		}

		if (min != i) /* Swap minimum element with current */
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
