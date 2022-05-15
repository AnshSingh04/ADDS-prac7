#ifndef Sort_H
#define Sort_H
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Sort {
    
    public:
    virtual vector<int> sort(vector<int> list) = 0;

};
#endif