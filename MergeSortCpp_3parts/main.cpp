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
        
        auto first_itr(begin(elements) + elements.size() / 3);
        auto second_itr(first_itr + elements.size() / 3);
        
        MergeSort(begin(elements), first_itr);
        MergeSort(first_itr, second_itr);
        MergeSort(second_itr, end(elements));
        
        vector<typename iterator_traits<RandomIt>::value_type> tmp_vector;
        merge(begin(elements), first_itr, first_itr, second_itr, back_inserter(tmp_vector));
        merge(begin(tmp_vector), end(tmp_vector), second_itr, end(elements), range_begin);
        
    }


    int main()
    {
        vector<int> v = {6, 4, 7, 6, 4, 4, 0, 1, 5};
        MergeSort(begin(v), end(v));
        for (int x : v) {
          cout << x << " ";
        }
        cout << endl;
        return 0;
    }
