#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &a, int s, int e){
    int pivot = a[e];
    int i = s - 1;
    for (int j = s; j < e; j++){
        if (a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[++i], a[e]);
    return i;
}
void quicksort(vector<int> &a, int s, int e){
    if (s >= e){
        return;
    }
    int p = partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}
int main(){
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(1);
    quicksort(nums, 0, nums.size()-1);
    for (int i : nums){
        cout << i << " ";
    }
    return 0;
}