//
//  main.cpp
//  Programming Assignment: Merge Sort
//
//  Created by admin on 26.03.2021.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;


template <typename RandomIt>
void MergeSort(RandomIt range_begin, RandomIt range_end)
{
    if (range_end - range_begin < 2)//        cout << "less then 2" << endl;
    {
        return;
    }
    
    vector<typename iterator_traits<RandomIt>::value_type> elements(range_begin, range_end);
    
    auto middle_itr(begin(elements) + elements.size() / 2);
    
    MergeSort(begin(elements), middle_itr);
    MergeSort(middle_itr, end(elements));
    merge(begin(elements), middle_itr, middle_itr, end(elements), range_begin);
    
}


int main()
{
    vector<int> v = {6, 4, 7, 6, 4, 4, 0, 1};
    
    MergeSort(begin(v), end(v));
    
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}
