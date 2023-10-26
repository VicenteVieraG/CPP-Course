#include <utils.h>
#include <insertionSort.h>

namespace INSERTION {
    void insertionSort(int* arr, int N){
        // Variable that will hold the current value to be compared
        int key;
        // Iterator for comparing each of the already sorted elements with the key value
        int j;

        for(int i = 1; i < N; i++){
            key = arr[i];
            j = i-1;

            while(j >= 0 && arr[j] > key){
                arr[j+1] = arr[j];
                j--;
            }

            arr[j+1] = key;
        }
    }
};