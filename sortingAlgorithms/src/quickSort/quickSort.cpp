#include <quickSort.h>
#include <utils.h>

namespace QUICK {
    int partition(int* arr, int low, int high){
        // Pick the last element as the pivot.
        // Index i represents the first bigger number than the pivot.
        int pivot = arr[high];
        int i = low - 1;

        for(int j = low; j <= high - 1; j++){
            if(arr[j] < arr[pivot]){
                i++;
                UTILS::swap(arr[i], arr[j]);
            }
        }

        // After swaping the first smaller number with the first bigger number
        // the pivot is swaped into its correct position; next to the first
        // swaped smallest number.
        // Return the number next to the current pivot position to be used as
        // The pivot for the next partition and sorting.
        UTILS::swap(arr[i + 1], arr[high]);

        return i + 1;
    }

    void quickSort(int* arr, int low, int high){
        // If the low index higher than the high index means the sub array
        // is of size 1 tho the array is already sorted.
        // BaSS case
        if(low >= high) return;

        // Compute the partition.
        // Make quickSort for each sub array (left and right from the pivot).
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
};