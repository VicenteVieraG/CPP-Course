#include <selectionSort.h>

namespace SELECTION {
    void stableSelectionSort(int* arr, int N){
        // Iterate throug all the elements of the array.
        for(int i = 0; i < N-1; i++){
            // All the elements until arr[i-1] are already sorted.

            // Find the minimun from arr[i] to arr[N-1].
            int min = i;
            for(int j = i + 1; j < N; j++){
                if(arr[j] < arr[min]) min = j;
            }

            // Store the value of the minumun element from arr[i] to arr[N-1] at our current iteration.
            int key = arr[min];
            // Shift all the values so that the min value gets in the correct place.
            for(int k = min; k > i; k--) arr[k] = arr[k-1];
            // Store the value at its right position.
            arr[i] = key;
        }
    }
};