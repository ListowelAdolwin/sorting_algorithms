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
	int pass = 0, comp = 0, tmp = 0, flag = 0;


	if (size < 2)
	{
		print_array(array, size);
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
					flag = 1;
				}
			}

			if (flag = 0)
				break;
		}
	}
}