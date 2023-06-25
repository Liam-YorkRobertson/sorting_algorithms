#include "sort.h"

/**
 *swap - swaps two integers
 *@a: first int
 *@b: second int
 *Return: none (void)
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 *partition - partitions the array using Lomuto
 *@array: array to be partitioned
 *@low: starting index
 *@high: ending index
 *@size: size of array
 *Return: index of the pivot element
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 *quicksort - recursive fucntion to sort the array using quick sort algorithm
 *@array: array to be sorted
 *@low: starting index
 *@high: ending index
 *@size: size of array
 */

void quicksort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);
	}
}

/**
 *quick_sort - sorts an array of integers in ascending order using quick sort
 *@array: array to be sorted
 *@size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	quicksort(array, 0, size - 1, size);
}
