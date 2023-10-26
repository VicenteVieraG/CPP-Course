#include <iostream>
#include <random>
#include <utils.h>

namespace UTILS {
    void swap(int& A, int& B){
        int temp = A;
        A = B;
        B = temp;
    }

    void printArr(int* arr, int N){
        std::cout<<"[";
        for(int i=0; i < N - 1; i++){
            std::cout<<arr[i]<<", ";
        }
        std::cout<<arr[N-1]<<"]"<<std::endl;
    }

    int arrSize(int* arr){
        return sizeof(arr) / sizeof(arr[0]);
    }

    void resetArr(int* arr, int N){
        std::random_device rd;
        std::mt19937 gen(rd());

        std::uniform_int_distribution<> distrib(1, 100);

        for(int i = 0; i < N; i++){
            arr[i] = distrib(gen);
        }
    }
}