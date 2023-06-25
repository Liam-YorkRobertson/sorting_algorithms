#include "sort.h"

/**
 *bubble_sort - Sorts an array of integers in ascending order using Bubble sort
 *@array: Pointer to the array to be sorted
 *@size: The size of the array
 *Return: none (void)
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size - 1; i++) /* Iterate through each element */
	{
		for (j = 0; j < size - i - 1; j++) /* Compare elements */
		{
			if (array[j] > array[j + 1]) /*swas elements*/
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
