#include <stdio.h>
#include "insertionSort.h"

int main() {
    int arr[10] = {1, 2, 8, 1, 3, 7, 4, 6, 5, 10};
    printf("Start array:\n");
    for (int i = 0; i < 10; ++i){
        printf("%d ", arr[i]);
    }
    insertionSort(10, arr);
    printf("\nSorted array:\n");
    for (int i = 0; i < 10; ++i){
        printf("%d ", arr[i]);
    }
    return 0;
}
