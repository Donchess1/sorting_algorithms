#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - sors the interger of an array
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;
	
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1 ; j++)
		{
			if (array[j + 1] < array[j])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
