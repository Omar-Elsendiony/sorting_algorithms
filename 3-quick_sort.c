#include "sort.h"

/**
 * my_quick_sort - Sort by quick sort
 * @array: array of size_t.
 * @size: size of array.
 * @orgArr: the orginal array to be passed every time for printing
 * @orgSize: the orginal size to be passed every time for printing
 * Return: Nothing - void function
 */

void my_quick_sort(int *array, size_t size, int *orgArr, int orgSize)
{
	size_t splitIndex = -1;
	size_t i = 0;
	size_t tmp = 0;
	/* The element where we will find its right place and do the split around it*/
	int pivot = array[size - 1];

	if (size == 1)
		return;
	while (i != size - 1)
	{
		if (array[i] < pivot)
		{
			++splitIndex;
			if (splitIndex != i)
			{
				tmp = array[i];
				array[i] = array[splitIndex];
				array[splitIndex] = tmp;
				print_array(orgArr, orgSize);
			}
			++i;
		}
		else
			++i;
	}
	++splitIndex;
	if (array[splitIndex] != array[size - 1])
	{
		tmp = array[splitIndex];
		array[splitIndex] = array[size - 1];
		array[size - 1] = tmp;
		print_array(orgArr, orgSize);
	}

		/* Recursion call*/
	if (splitIndex != 0)
		my_quick_sort(array, splitIndex, orgArr, orgSize);
	if (splitIndex + 1 != size)
		my_quick_sort(&array[splitIndex + 1],
						size - splitIndex - 1, orgArr, orgSize);
}

/**
 * quick_sort - Sort by quick sort
 * @array: array of size_t.
 * @size: size of array.
 * Return: Nothing - void function
 */

void quick_sort(int *array, size_t size)
{
	my_quick_sort(array, size, array, size);
}
