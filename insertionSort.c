#include "insertionSort.h"

void insertionSort(int len, int *arr) {

    int itemToInsert, j;

    for (int i = 1; i < len; i++)
    {
        itemToInsert = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > itemToInsert)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = itemToInsert;
    }
}
