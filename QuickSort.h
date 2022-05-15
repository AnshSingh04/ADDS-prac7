#ifndef QuickSort_H
#define QuickSort_H
#include <iostream>
#include <vector>
#include"Sort.h"
using namespace std;

class QuickSort: public Sort {
    
    public:
    vector<int> sort(vector<int> list);
    vector<int> quicksrt(vector<int>list,int low, int high);
    
};
#endif