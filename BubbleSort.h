#ifndef BubbleSort_H
#define BubbleSort_H
#include <iostream>
#include <vector>
#include"Sort.h"
using namespace std;

class BubbleSort: public Sort {
    
    public:
    vector<int> sort(vector<int> list);
    
};
#endif