#include <iostream>
#include <utils.h>
#include <bubbleSort.h>
#include <insertionSort.h>
#include <selectionSort.h>

int main(int argc, char** argv){
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int N = sizeof(arr) / sizeof(arr[0]);

    BUBBLE::bubbleSort(arr, N);
    UTILS::printArr(arr, N);
    UTILS::resetArr(arr, N);
    INSERTION::insertionSort(arr, N);
    UTILS::printArr(arr, N);
    UTILS::resetArr(arr, N);
    SELECTION::stableSelectionSort(arr, N);
    UTILS::printArr(arr, N);
}