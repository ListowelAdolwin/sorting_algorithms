#include "sort.h"


/**
 * bubble_sort- sorts an arraiy in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 * return: void
 *
 * print_array - prints the array after every swap
 *
 */


void bubble_sort(int *array, size_t size)
{
	size_t pass = 0, comp = 0;
	int tmp = 0;

	if (size < 2)
	{
		print_array(array, size);
		return;
	}

	else
	{
		for (pass = 0; pass < size - 1; pass++)
		{
			for (comp = 0; comp < size - 1 - pass; comp++)
			{
				if (array[comp] > array[comp + 1])
				{
					tmp = array[comp];
					array[comp] = array[comp + 1];
					array[comp + 1] = tmp;
					print_array(array, size);
				}
			}

		}
	}
}
