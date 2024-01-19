#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"
/*
* This function is used to print an array of integers in ascending order.  It takes as
* input the number of elements in the array, a pointer to the first element of the array,
* and an optional message that will be printed before the array.
*/
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    bool swapped;
    for (i = 0; i < size - 1; i++) {
        swapped = false;
        for (j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j +1]);
                swapped = true;
            }
        }
        /* If no two elements were swapped by inner loop, then the array is sorted */
        if (!swapped)
            break;
    }
}

