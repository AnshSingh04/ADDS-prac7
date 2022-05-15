#include "QuickSort.h"
#include <iostream>
using namespace std;

vector<int> QuickSort::sort(vector<int> list) {
  int len = list.size();
  int low=0;
  int high=len-1;
  quicksrt(list,low,high);
  return list;
}

void QuickSort::quicksrt(vector<int>&list, int low, int high) {
  if (low < high) {
    int i = partition(list, low, high);
    quicksrt(list, low, i-1);
    quicksrt(list, i+1, high);
  }
}

int QuickSort::partition(vector<int>&list, int low, int high) {
  int pivot = high;
  int temp=0;
  temp=list.at(2);
  list.at(2)=high;
  list.at(high)=temp;
	int j = low;
	for(int i=low;i<high;++i){
		if(list.at(i)<list.at(pivot)){
			swap(list.at(i),list.at(j));
			++j;
		}
	}
	swap(list.at(j),list.at(pivot));
	return j;
}

