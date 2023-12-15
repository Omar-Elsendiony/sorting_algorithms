#include "sort.h"


void selection_sort(int *array, size_t size)
{
    size_t i, j;
    int temp, min, thereisSwap = 0;

    if (size < 2) return;
    for(i = 0; i < size - 1; i++)
    {
        temp = array[i];
        min = i;
        thereisSwap = 0;
        for(j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
                thereisSwap = 1;
            }
        }
        if (thereisSwap)
        {
            array[i] = array[min];
            array[min] = temp;
            print_array(array, size);
        }
    }
}
