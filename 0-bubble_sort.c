#include "sort.h"

/**
 *bubble_sort - sorts an array using buble sort
 *@array: array to sort
 *@size: size of array
 *Return: none (void)
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size - 1; ++i) /*access each element*/
	{
		for (j = 0; j < size - i - 1; ++j) /*compare elements*/
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		for (j = 0; j < size; j++) /*prints array*/
		{
			printf("%d ", array[j]);
		}
		printf("\n");
	}
}
