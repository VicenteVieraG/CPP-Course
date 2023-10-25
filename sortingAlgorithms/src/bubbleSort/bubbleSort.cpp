#include <iostream>
#include <bubbleSort.h>

namespace BUBBLE{
    void printArray(int* array, int N){
        std::cout<<"[";
        for(int i=0; i < N; i++){
            std::cout<<array[i]<<",";
        }
        std::cout<<"]"<<std::endl;
    }

    void swap(int& A, int& B){
        int temp = A;
        A = B;
        B = temp;
    }

    void bubbleSort(int* arr, int N){
        // Variable to determine if the nubers have already been swaped and avoid making the comparison
        bool swapped;

        // Loop to access each array element
        for(int i=0; i < N; i++){
            swapped = false;
            // Loop to compare array elements
            for(int j=0; j < N-i-1; j++){
                // > to order lowest to highest, > highest to lowest
                if(arr[j] > arr[j + 1]){
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }

            // If there was no swap it means that the array is already sorted.
            if(!swapped) break;
        }
    }
};