#include "BubbleSort.h"
#include <iostream>
using namespace std;

vector<int> BubbleSort::sort(vector<int> list) {
    int len = list.size();
    if(len == 1)
        return list;
    for (int i = 0; i < len-1; i++) {
        for (int j = 0; j < len-i-1; j++) {
            if (list.at(j) > list.at(j + 1))
                swap(list.at(j), list.at(j + 1));
        }   
    }
    return list;
}


