//
//  main.cpp
//  Algo
//
//  Created by admin on 03.02.2021.
//
// This is BubleAlgorithm
// Very simple (compare two neighbours and swith it bitwean in case of first > second)
#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {

    int arr[] = {0, 8, 1, 4, 9, 2, 6, 3, 1};
    int arrayLength = 0;

    if (!sizeof(arr)) {
        cout << "Array has no length!" << endl;
        return 0;
    }
    
    arrayLength = sizeof(arr) / sizeof(int);
    
    for (int i = 0;  i < arrayLength; i++)
    {
        int tmp;
        for (int j = i + 1; j < arrayLength; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    
    
    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
