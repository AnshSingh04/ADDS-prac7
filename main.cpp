#include"Sort.h"
#include"BubbleSort.h"
#include"QuickSort.h"
#include"RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    vector<int> list; int i=0;
    while(cin>>i) {
        list.push_back(i);
    }
    RecursiveBinarySearch s;
    QuickSort q;
    BubbleSort b;
    list = q.sort(list);
    bool bol = s.search(list,1);
    if(bol == 1)
        cout<<"true ";
    else
        cout<<"false ";
    for (auto i: list)
        cout << i << ' ';
}