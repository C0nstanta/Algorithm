//
//  main.cpp
//  QuickSortProject
//
//  Created by admin on 08.06.2021.
//

#include <iostream>
#include <vector>


template<class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    bool flag = true;
    
    for(const auto& vec : v)
    {
        if (flag)
        {
            os << vec;
            flag = false;
        }
        else
        {
            os << " " << vec;
        }
    }
    
    return os;
}


int partition(std::vector<int>& sort_list, int start, int end)
{
    int i = start;
    int pivot = sort_list[end];
    
    for(int j = start; j < end; ++j)
    {
        std::cout << sort_list << std::endl;
        std::cout << "Left = " << sort_list[i] << ", Right = " << sort_list[j]
        << ", Pivot = " << pivot << ", i = " << i << ", j = " << j
        << ", Right less than Pivot, swap Right with Left? = " << std::boolalpha
        << (sort_list[j] < pivot) << "\n"<< std::endl;
        
        if (sort_list[j] < pivot)
        {
            std::swap(sort_list[i], sort_list[j]);
            i++;
        }
    }
    
    std::cout << sort_list << std::endl;
    std::cout << "swaping Pivot = " << pivot << " with Left = " << sort_list[i]
              << "\n" << std::endl;
    std::swap(sort_list[i], sort_list[end]);
    
    return i;
}


void qsort(std::vector<int>& sort_list, int start, int end)
{
    if (start < end)
    {
        int pivot = partition(sort_list, start, end);
        qsort(sort_list, start, pivot - 1);
        qsort(sort_list, pivot + 1, end);
    }
}


int main(int argc, const char * argv[])
{
    
    std::vector<int> a {81, 44, 91, 23, 26, 42, 46, 19, 46};
    
    int end = static_cast<int>(a.size() - 1);
    
    qsort(a, 0, end);
    
    std::cout << a << std::endl;
    
    return 0;
}
