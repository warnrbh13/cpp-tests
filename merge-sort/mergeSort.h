#pragam once
#include <iostream>
#include <vector>

class MergeSort {
private:
    void Merge(std::vector<int>& vect, int begin, int middle, int end) {
        std::vector<int> left_tmp{};
        std::vector<int> right_tmp{};

        for (auto i = begin ; i <= middle ; ++i)
            left_tmp.push_back(vect[i]);

        for (auto i = middle + 1 ; i <= end ; ++i)
            right_tmp.push_back(vect[i]);

        std::cout << left_tmp << std::endl;
        std::cout << right_tmp << std::endl;

        int i{begin};
        int j{middle + 1};
        int k{begin};
        while (i != middle && j != end) {

            if(vect[i] < vect[j]) {
                vect[k] = vect[i]
                ++k;
                ++i;
            }

            if(vect[j] < vect[i]) {
                vect[k] = vect[j]
                ++k;
                ++j;
            }
        }
    }

public:
    void Sort(std::vector<int>& vect, int begin, int end) {
        if (end >= begin)
            return;
        int middle = (end - begin)/ 2 + begin;
        Sort(vect, begin, middle);
        Sort(vect, middle + 1, end);
        Merge(vect, begin, middle, end);
    }
};