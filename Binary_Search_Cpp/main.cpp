//
//  main.cpp
//  Binary_Search
//
//  Created by admin on 06.02.2021.
//

#include <iostream>
#define SIZE 10

int main(int argc, const char * argv[]) {

    
    int arr[SIZE] ={1, 12, 32, 43, 43, 45, 67, 78, 90, 230};
    int num;
//-------------------------------------------------------------
//    int i = 0;
//    std::cout << "Enter your array as a string. With spaces between digits" << std::endl;
    
//    while (i < 10) {
//        std::cin >> arr[i];
//
//        i++;
//    }
//-------------------------------------------------------------
    std::cout << "Enter number you want to find:" << std::endl;
    std::cin >> num;
    
    for (int i = 0; i < 10; i++ )
    {
        std::cout << arr[i] << " ";
    };
    
    int middle, count = 0, start = 0, end = (sizeof(arr) / (sizeof(int)));

    
    while(1)
    {
        middle = (start + end) / 2;
        if (arr[middle] > num) end = middle -1;
        else if (arr[middle] < num) start = middle + 1;
        if (arr[start] > num  || arr[end] < num)
        {
            count++;
            std::cout << "\nThere is no your number in the array!. Attempts number: " << count << std::endl;
            return  0;
        };
        
        if(arr[middle] == num)
        {
            count++;
            std::cout << "\nWe found a number: " << num << " . Used " << count << " attempt.\n";
            return 0;
        };
        count++;
        
    };
    
    return 0;
}
