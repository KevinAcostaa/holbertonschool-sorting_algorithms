#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - function
 * @array: array
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, aux;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;

				print_array(array, size);
			}
		}
	}
}
