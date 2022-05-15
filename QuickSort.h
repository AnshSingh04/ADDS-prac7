#ifndef QuickSort_H
#define QuickSort_H
#include <iostream>
#include <vector>
#include"Sort.h"
using namespace std;

class QuickSort: public Sort {
    
    public:
    vector<int> sort(vector<int> list);
    int partition(vector<int>&list, int low, int high);
    void quicksrt(vector<int>&list,int low, int high);
    
};
#endif