#include <shellSort.h>

namespace SHELL {
    void shellSort(int* arr, int N){
        for(int gap = N/2; gap > 0; gap /= 2){
            for(int i = gap; i < N; i++){
                int temp = arr[i];
                int j;

                // In this case j-gap is the index of the position in the array where the gap starts.
                // j-gap is compared with temp wich is the value of the last position of the gap.
                for(j = i; j >= gap && arr[j-gap] > temp; j -= gap){
                    arr[j] = arr[j-gap];
                }
                arr[j] = temp;
            }
        }
    }
};