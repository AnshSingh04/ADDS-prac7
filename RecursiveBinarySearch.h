#ifndef RecursiveBinarySearch_H
#define RecursiveBinarySearch_H
#include <iostream>
#include <vector>
using namespace std;

class RecursiveBinarySearch {
    
    public:
    bool search(vector<int> list, int num);
    int binsearch(vector<int>&list, int num, int low, int high);
    
};
#endif