#include"Sort.h"
#include"BubbleSort.h"
#include"QuickSort.h"
#include"RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    vector<int> vec1 = { 43, 5, 123, 94, 359, -23, 2, -1 };
    RecursiveBinarySearch s;
    bool b = s.search(vec1,99);
    cout<<b;
}