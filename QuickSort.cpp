#include "QuickSort.h"
#include <iostream>
using namespace std;

vector<int> QuickSort::sort(vector<int> list) {
  int len = list.size();
  int low=0;
  int high=len-1;
  return quicksrt(list,low,high);
}

vector<int> QuickSort::quicksrt(vector<int>list, int low, int high) {
    int pivot;
    if (low <= high){
      pivot=list.at(high);
      if(high - low >= 2){
        pivot = list.at(low+2);
        swap(list.at(high),list.at(low+2));
      }
      int i = (low - 1);
      for (int j = low; j <= high - 1; j++) {
          if (list.at(j) < pivot) {
                i++;
                swap(list.at(j),list.at(i));
            }
        }
        swap(list.at(high),list.at(i+1));
        list = quicksrt(list,low, i);
        list = quicksrt(list,i+2,high);
    }
    return list;

}

