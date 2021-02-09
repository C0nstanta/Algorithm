//
//  main.cpp
//  SelectionSort_2ver
//
//  Created by admin on 09.02.2021.
//
//Selection sort is an algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.
#include <iostream>
#define SIZE 20


void selection_sort(int *arr, int arr_length);

int main(int argc, const char * argv[]) {

    int source_arr[SIZE] = {1, 5, 67, 90, 43, 234, 111, 54, 23, 78, 904, 2203, 34, 453, -9, -50, 690, 0, 9987, -9987};
    int *ptr_source_arr = source_arr;
    int arr_length = sizeof(source_arr) / sizeof(int);
    
    
    selection_sort(ptr_source_arr, arr_length);
    for (int i = 0; i < arr_length; i++)
    {
        std::cout << source_arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

void selection_sort(int *arr, int arr_length)
{
    for(int i = 0; i < arr_length; i++)
    {
        for(int j = i+1; j < arr_length - 1; j++)
        {
            if(arr[i] > arr[j])
            {
                std::swap(arr[i], arr[j]);
            };
        }
    }
    
};
