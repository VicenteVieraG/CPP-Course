#include <iostream>
#include <bubbleSort.h>

int main(int argc, char** argv){
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int N = sizeof(arr) / sizeof(arr[0]);

    BUBBLE::bubbleSort(arr, N);
    BUBBLE::printArray(arr, N);
}