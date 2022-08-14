#include "sort.h"

/**
 * selection_sort - sorts the array
 * @array: the array
 * @size: the size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	int pass = 0, comp = 0, tmp = 0, min = 0;

	for (pass = 0; pass < size - 1; pass++)
	{
		min = pass;
		for (comp = pass + 1; comp < size; comp++)
		{
			if (array[comp] < array[min])
			{
				min = comp;
			}
		}

		if (min != pass)
		{
			tmp = array[pass];
			array[pass] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}

