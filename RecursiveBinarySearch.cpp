#include "RecursiveBinarySearch.h"
#include <iostream>
using namespace std;

bool RecursiveBinarySearch::search(vector<int> list, int num) {
    int result = binsearch(list, num, 0, list.size()-1);
    if(result > 0)
        return 1;
    else
        return 0;
}

int RecursiveBinarySearch::binsearch(vector<int>&list, int num, int low, int high)
{
    if (low > high)
        return 0;
    int mid = (low + high)/2;
    if (num == list.at(mid))
        return mid;
    else if (num < list.at(mid))
        return binsearch(list, num, low, mid - 1);
    else
        return binsearch(list, num, mid + 1, high);
}


