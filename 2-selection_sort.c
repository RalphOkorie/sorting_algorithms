#include "sort.h"

/**
* selection_sort - It implemention selection type sort
*
* @array: array of integers
* @size: array size
*/

void selection_sort(int *array, size_t size)
{
	int tem, minimum, min_index;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		minimum = array[i];
		min_index = i;

		for (j = i; j < size; j++)
		{
			if (minimum > array[j])
			{
				min_index = j;
				minimum = array[j];
			}
		}
		if (min_index != (int)i)
		{
			tem = array[i];
			array[i] = array[min_index];
			array[min_index] = tem;

			print_array(array, size);
		}
	}
}
